#include <stdio.h>
#include <string.h>

#define MAX_USUARIOS 100
#define MAX_NOME 50
#define MAX_SENHA 20    // #define essas constantes com o valor a frente, é basicamente como se fosse uma constante.
//estarei usando para deixar o codigo mais legivel

  // define uma struct, uma estrutura com variaveis definidas, podendo ser usada como parametro e incluidas
//em outras variaveis como vetores
typedef struct {
    char nome[MAX_NOME];
    char senha[MAX_SENHA];
}Usuario;  //nome da estrutura

Usuario user[MAX_USUARIOS]; //cria uma vetor "user" que tem dois parametros (nome e senha), herdada pelo struct usuario
// exemplo scanf(user[i].nome)

int numUser = 0;

void cadastroUser(){

    if(numUser >= MAX_USUARIOS){
        puts("Numeros de usuarios cadastrados excedido!"); // se numero de usuario for maior que MAX_USUARIO
    }

Usuario newuser; // criando variavel de novo usuario, percebe que não definimos tipo, pois esta herdando da struct
   // char n1[MAX_NOME];
    printf("\tDigite o nome de usuario: ");
   // gets(n1);

    //snprintf(newuser.nome, sizeof(newuser.nome), "%s", n1);
    scanf("%s", newuser.nome); // nota que não se usa & para endereçar uma variavel struct
    fflush(stdin);
    //verifica se o usuario esta cadastrado

    for(int i = 0; i < numUser; i ++){ //enquanto i for menor que a quantidade de usuario ele vai continuar rodando
        if(strcmp(user[i].nome, newuser.nome) == 0){ //se usuario o nome no vetor "user" for identico ao newuser que
            printf("Usuario ja cadastrado!");// acabamos de digitar atraves da função strcmp() == 0, entao o usuario ja existe
        }return;//importante retornar algo, para o codigo ser executado novamente
    }

    printf("\n\tDigite a senha: ");
    scanf("%s", newuser.senha);
    fflush(stdin);
    user[numUser] = newuser; //armazena o newuser na posição numuser que sempre sera a ultima posicao do vetor user
    

    printf("\t\nUsuario cadastrado com sucesso!!!");

    FILE *arquivo = fopen("users.txt", "w");

    if(arquivo == NULL){
        perror("NOT FOUND");
        return 1;
        } 
    
    fprintf(arquivo, "%s\n", user[numUser]);

    fclose(arquivo);
    numUser ++;       
}


int autenticarUser() {
    char nome[MAX_NOME]; //variaveis de comparação, fora do struct
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

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar usuário\n");
        printf("2. Autenticar usuário\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

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

    } while (opcao != 3);

    return 0;
}  


