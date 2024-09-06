#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main(){
    typedef struct {
    char user[50];
    char senha[50];
}Usuario;

    Usuario nome;
    char n1[50];

    printf("Digite nome");
    gets(n1);
    snprintf(nome.user,sizeof(nome.user), "%s", n1); // snprintf() faz a leitura e armazena o buffer da variavel

    printf("%s", nome.user);

    FILE *arquivo = fopen("dados.txt", "w");// abre um arquivo dados.txt, com o parametro WRITE

    if(arquivo == NULL){
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    //escrevendo no arquivo
    fprintf(arquivo, "nome: %s\n", nome.user);
    fprintf(arquivo, "senha: %s\n", nome.senha);

    fclose(arquivo); //fecha o arquivo

    printf("Dados escritos com sucesso!");
    return 0;
}
