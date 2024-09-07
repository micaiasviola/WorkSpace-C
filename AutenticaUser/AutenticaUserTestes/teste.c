#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Para usar `exit()`
#include <locale.h>

#define MAX_USUARIOS 100
#define MAX_NOME 50
#define MAX_SENHA 20

typedef struct
{
    char nome[MAX_NOME];
    char senha[MAX_SENHA];
} Usuario;

Usuario user[MAX_USUARIOS]; // Vetor para armazenar os usuários
int idUsuario = 0;          // Número de usuários cadastrados

// Função para limpar o buffer de entrada
void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
        // corpo do loop vazio para apenas limpar o buffer, consumindo os dados do caracter sem fazer nada com eles apenas consumir
    } // Consome o restante dos caracteres no buffer
      // verifica se o caractere "C" nao é \n e tambem verifica se não é o fim do arquvio END OF FILE "EOF"
}

void cadastroUser()
{
    if (idUsuario >= MAX_USUARIOS)
    {
        puts("Número de usuários cadastrados excedido!");
        return;
    }

    Usuario novoUsuario;                        // Variável temporária para novo usuário
    FILE *arquivo = fopen("usuarios.txt", "a"); // Abertura do arquivo no modo de adição

    if (!arquivo)
    { // se arquivo fol nulo
        perror("Erro ao abrir o arquivo");
        return;
    }

    printf("\tDigite o nome de usuário: ");
    fgets(novoUsuario.nome, MAX_NOME, stdin);                 // Lê o nome do novo usuário
    novoUsuario.nome[strcspn(novoUsuario.nome, "\n")] = '\0'; // Remove o caractere de nova linha que pode ser escrito no buffer pela função fgets()

    // Verifica se o usuário já existe
    for (int i = 0; i < idUsuario; i++)
    {
        if (strcmp(user[i].nome, novoUsuario.nome) == 0)
        { // usa o função strcmp para verificar se o nome escolhido ja existe, se for == 0 é verdadeiro o retorno de strcmp
            printf("Usuário já cadastrado!\n");
            fclose(arquivo);
            return; // Sai da função se o usuário já existir
        }
    }

    printf("\n\tDigite a senha: ");
    fgets(novoUsuario.senha, MAX_SENHA, stdin);                 // Lê a senha/tamanho/entrada
    novoUsuario.senha[strcspn(novoUsuario.senha, "\n")] = '\0'; // Remove o caractere de nova linha/ percorre a variavel e substitius a strg2 pelo valor /0

    user[idUsuario] = novoUsuario; // Adiciona o novo usuário ao vetor de usuários

    // Salva no arquivo
    fprintf(arquivo, "%s\n", user[idUsuario].nome);
    fprintf(arquivo, "%s\n", user[idUsuario].senha);
    fclose(arquivo);

    idUsuario++; // Incrementa o número de usuários
    printf("\t\nUsuário cadastrado com sucesso!!!\n");
}

int autenticarUser()
{
    char confirmaNome[MAX_NOME];
    char confirmaSenha[MAX_SENHA];

    printf("Digite o nome de usuário: ");
    fgets(confirmaNome, MAX_NOME, stdin);             // Lê o nome do usuário
    confirmaNome[strcspn(confirmaNome, "\n")] = '\0'; // Remove o caractere de nova linha, a funcao strcspn(confirmaNome, "\n") calcula o comprimento da string ate encontrar o caractere na string
                                                      // de busca, no caso o "\n". a expressao pai confirmaNome[strcspn(confirmaNome, "\n")] = '\0'; usa o valor retornado da função strcspn como um "i" indice para acessar o caractere na posição onde o /n foi encontrado e substitiur por '\0', um nulo

    printf("Digite a senha: ");
    fgets(confirmaSenha, MAX_SENHA, stdin);             // Lê a senha, percorre o TAMANHO MAX no caso, e as entradas são de teclado STDIN
    confirmaSenha[strcspn(confirmaSenha, "\n")] = '\0'; // Remove o caractere de nova linha

    // Verifica se o nome e senha estão corretos
    for (int i = 0; i < idUsuario; i++)
    {
        if (strcmp(user[i].nome, confirmaNome) == 0 && strcmp(user[i].senha, confirmaSenha) == 0)
        {
            return 1; // Autenticação bem-sucedida
        }
    }

    return 0; // Falha na autenticação
}

int obterOpcao()
{
    int opcao;
    char buffer[100];

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Cadastrar usuário\n");
        printf("2. Autenticar usuário\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");

        if (fgets(buffer, sizeof(buffer), stdin))
        { // le uma entrada de teclado até encontrar um /n ou o limite de car e armazena na variavel
            if (sscanf(buffer, "%d", &opcao) == 1 && opcao >= 1 && opcao <= 3)
            {                 // sscanf retorna um numero inteiro de itens lidos, se retornar 1 significa que a conversão funcionou
                return opcao; // retorna para a variavel opção que é o controle do menu
            }
            else
            {
                printf("Opção inválida. Tente novamente.\n");
            }
        }
        else
        {
            printf("Erro ao ler a entrada. Tente novamente.\n");
        }
    }
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int opcao;

    do
    {
        opcao = obterOpcao(); // Obtém uma opção válida retornado da funcção

        switch (opcao)
        {
        case 1:
            cadastroUser();
            break;
        case 2:
            if (autenticarUser())
            {
                printf("Usuário autenticado com sucesso!\n");
            }
            else
            {
                printf("Falha na autenticação. Usuário ou senha incorretos.\n");
            }
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            // Não deve chegar aqui devido ao controle na função obterOpcao()
            break;
        }
    } while (opcao != 3);

    return 0;
}
