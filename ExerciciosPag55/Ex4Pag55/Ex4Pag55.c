#include <stdio.h>
#include <conio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    //este programa testa uma dada senha
    char d1[20] = "micaiasviola";
    char d2[11] = "1234";
    char senha[11];
    char user[20];

    printf("Insira o usuário: \n");
    gets(user);
    printf("Insira a senha: \n");
    gets(senha);

    fflush(stdin);      // a função strcmp(var1,var2) compara duas variaveis char.
    //se elas foram iguais será igual à 0, se diferente == 1
    if(strcmp(user, d1) == 0 && strcmp(senha, d2) == 0){
        printf("\t\nBem vindo!");
    }else{
        printf("Usuario ou senha incorretas!");
    }




    // if(user == d1 && senha == d2){
    //     printf("hello");
        
    // }else{
    //     printf("hakuna matata");
    // }
    // // printf("%s\n%s", user, senha);

    return 0;
}