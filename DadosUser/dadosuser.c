#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

 
int main(void){
    char nome[99], rua[99], bairro[99], cidade[99], cep[8];
    int numero;

    puts("Digite o seu nome: ");
    gets(nome); // substitui o Scanf, consegue pegar o valor de um Char após o espaço.
    fflush (stdin);
    puts("\nDigite o nome da sua Cidade: ");
    gets(cidade);
  fflush (stdin);
    puts("\nDigite o nome do seu bairro: ");
    gets(bairro);
    fflush (stdin);
    puts("\nDigite o nome da sua rua: ");
    gets(rua);
fflush (stdin);
    puts("\nDigite o numero da sua residencia: ");
    scanf("%i", &numero);
    fflush (stdin);
    puts("\nDigite o seu CEP: ");
    gets(cep);
    
    printf("%s\n%s\n%s\n%s\n%i\n%s\n", nome, cidade, bairro, rua, numero, cep);

return 0;

}