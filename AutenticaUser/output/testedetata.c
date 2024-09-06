#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // Para usar `exit()`
#include <locale.h>

#define MAX_USUARIOS 100
#define MAX_NOME 50
#define MAX_SENHA 20

typedef struct {
    char nome[MAX_NOME];
    char senha[MAX_SENHA];
} Usuario;

Usuario user[MAX_USUARIOS];  // Vetor para armazenar os usuários
int numUser = 0;  // Número de usuários cadastrados

// Função para limpar o buffer de entrada
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        //corpo do loop vazio para apenas limpar o buffer, consumindo os dados do caracter sem fazer nada com eles apenas consumir
    }  // Consome o restante dos caracteres no buffer
                                                    //verifica se o caractere "C" nao é \n e tambem verifica se não é o fim do arquvio END OF FILE "EOF"
}

void cadastroUser() {
    if (numUser >= MAX_USUARIOS) {
        puts("Número de usuários cadastrados excedido!");
        return;
    }

    Usuario newuser;  // Variável temporária para novo usuário
    FILE *arquivo = fopen("users.txt", "a");  // Abertura do arquivo no modo de adição

    if (!arquivo) {                 //se arquivo fol nulo
        perror("Erro ao abrir o arquivo");
        return;
    }

    printf("\tDigite o nome de usuário: ");
    fgets(newuser.nome, MAX_NOME, stdin);  // Lê o nome do novo usuário
    newuser.nome[strcspn(newuser.nome, "\n")] = '\0';  // Remove o caractere de nova linha que pode ser escrito no buffer pela função fgets()

    // Verifica se o usuário já existe
    for (int i = 0; i < numUser; i++) {
        if (strcmp(user[i].nome, newuser.nome) == 0) {  //usa o função strcmp para verificar se o nome escolhido ja existe, se for == 0 é verdadeiro o retorno de strcmp
            printf("Usuário já cadastrado!\n");
            fclose(arquivo);
            return;  // Sai da função se o usuário já existir
        }
    }

    printf("\n\tDigite a senha: ");
    fgets(newuser.senha, MAX_SENHA, stdin);  // Lê a senha
    newuser.senha[strcspn(newuser.senha, "\n")] = '\0';  // Remove o caractere de nova linha

    user[numUser] = newuser;  // Adiciona o novo usuário ao vetor de usuários

    // Salva no arquivo
    fprintf(arquivo, "%s\n", user[numUser].nome);
    fprintf(arquivo, "%s\n", user[numUser].senha);
    fclose(arquivo);

    numUser++;  // Incrementa o número de usuários
    printf("\t\nUsuário cadastrado com sucesso!!!\n");
}

int autenticarUser() {
    char nome[MAX_NOME];
    char senha[MAX_SENHA];

    printf("Digite o nome de usuário: ");
    fgets(nome, MAX_NOME, stdin);  // Lê o nome do usuário
    nome[strcspn(nome, "\n")] = '\0';  // Remove o caractere de nova linha

    printf("Digite a senha: ");
    fgets(senha, MAX_SENHA, stdin);  // Lê a senha
    senha[strcspn(senha, "\n")] = '\0';  // Remove o caractere de nova linha

    // Verifica se o nome e senha estão corretos
    for (int i = 0; i < numUser; i++) {
        if (strcmp(user[i].nome, nome) == 0 && strcmp(user[i].senha, senha) == 0) {
            return 1;  // Autenticação bem-sucedida
        }
    }

    return 0;  // Falha na autenticação
}

int obterOpcao() {
    int opcao;
    char buffer[100];

    while (1) {
        printf("\nMenu:\n");
        printf("1. Cadastrar usuário\n");
        printf("2. Autenticar usuário\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        
        if (fgets(buffer, sizeof(buffer), stdin)) {
            if (sscanf(buffer, "%d", &opcao) == 1 && opcao >= 1 && opcao <= 3) {
                return opcao;
            } else {
                printf("Opção inválida. Tente novamente.\n");
            }
        } else {
            printf("Erro ao ler a entrada. Tente novamente.\n");
        }
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int opcao;

    do {
        opcao = obterOpcao();  // Obtém uma opção válida

        switch (opcao) {
            case 1:
                cadastroUser();
                break;
            case 2:
                if (autenticarUser()) {
                    printf("Usuário autenticado com sucesso!\n");
                } else {
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
