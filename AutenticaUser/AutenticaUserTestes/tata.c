#include <stdio.h>
#include <string.h>

#define MAX_USUARIOS 100
#define MAX_NOME 50
#define MAX_SENHA 20                                                    // #define essas constantes com o valor a frente, é basicamente como se fosse uma constante.
                                                            //estarei usando para deixar o codigo mais legivel

                                                                // define uma struct, uma estrutura com variaveis definidas, podendo ser usada como parametro e incluidas
                                                                                //em outras variaveis como vetores
typedef struct {
    char nome[MAX_NOME];
    char senha[MAX_SENHA];
}Usuario;                                                                   //nome da estrutura

Usuario user[MAX_USUARIOS];                                     //cria uma vetor "user" que tem dois parametros (nome e senha), herdada pelo struct usuario
                                                           // exemplo scanf(user[i].nome)

int numUser = 0;

void cadastroUser(){
    Usuario newuser;                                                                        // criando variavel de novo usuario, percebe que não definimos tipo, pois esta herdando da struct
                    
    FILE *arquivo = fopen("users.txt", "a");                                        //abertura de arquivo para armazenamento de dados

    if(numUser >= MAX_USUARIOS){
        puts("Numeros de usuarios cadastrados excedido!");                                      // se numero de usuario for maior que MAX_USUARIO
    }

    printf("\tDigite o nome de usuario: ");
                                                                                // scanf("%s", newuser.nome); // nota que não se usa & para endereçar uma variavel struct
    
    
    fgets(newuser.nome, MAX_NOME, stdin);                                           // Lê até 49 caracteres da entrada padrão e armazena em newuser.nome
    fflush(stdin);
                                                                                // Removendo o caractere de nova linha '\n' que fgets insere
    newuser.nome[strcspn(newuser.nome, "\n")] = '\0';
   
    for(int i = 0; i < numUser; i ++){                  //enquanto i for menor que a quantidade de usuario ele vai continuar rodando
        if(strcmp(user[i].nome, newuser.nome) == 0){    //se usuario o nome no vetor "user" for identico ao newuser que
            printf("Usuario ja cadastrado!");       //verifica se o usuario esta cadastrado
                                                    // acabamos de digitar atraves da função strcmp() == 0, entao o usuario ja existe
        }return;                                  //importante retornar algo, para o codigo ser executado novamente
    }
    

    
    printf("\n\tDigite a senha: ");
    scanf("%s", newuser.senha);
    fflush(stdin);
    user[numUser] = newuser;                                                        //armazena o newuser na posição numuser que sempre sera a ultima posicao do vetor user
    
                                                                                                //fprint escreve em arquivo
    fprintf(arquivo, "%s\n", user[numUser].senha);

    if(arquivo == NULL){
        perror("NOT FOUND");
        // return 0;
        } 
    
    fprintf(arquivo, "%s\n", user[numUser].nome);
    
    fclose(arquivo);
    numUser ++;  

    printf("\t\nUsuario cadastrado com sucesso!!!");

}


int autenticarUser() {

    char nome[MAX_NOME];                                                        //variaveis de comparação, fora do struct
    char senha[MAX_SENHA];

    printf("Digite o nome de usuário: ");
    scanf("%s", nome);

    printf("Digite a senha: ");
    scanf("%s", senha);

    for (int i = 0; i < numUser; i++) {
        if (strcmp(user[i].nome, nome) == 0 && strcmp(user[i].senha, senha) == 0) {
            return 1; // Autenticação bem-sucedida
        }
    }

    return 0; // Falha na autenticação
}


int main() {
   int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar usuário\n");
        printf("2. Autenticar usuário\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%i", &opcao);

        switch (opcao) {
            case 1:
            cadastroUser();
                    
                                   
                break;
            case 2:
                if (autenticarUser()) {
                    printf("Usuario autenticado com sucesso!\n");
                } else {
                    printf("Falha na autenticação. Usuario ou senha incorretos.\n");
                }
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção invalida.\n");
                break;
        }
    fflush(stdin);
    } while (opcao != 3);

    return 0;
}  


// int autenticaUser(){
//     char nome[MAX_NOME];
//     char senha[MAX_SENHA]; //variaveis definidas fora do struct

//     printf("\t\nDigite o nome do usuario: ");
//     scanf("%s", &nome);
   
//     printf("\t\nDigite a senha: ");
//     scanf("%s", &senha);

//     for(int i = 0; i < numUser; i ++){
//         if(strcmp(user[i].nome, nome) == 0 && strcmp(user[i].senha, senha) == 0){
//            return 1;
//         }
//     }
//     return 0; //falhou
// }
