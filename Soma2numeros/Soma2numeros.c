#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main(){
    
    float n1, n2, soma; // definição das variaveis
    
    printf("\nEste e um algoritmo que realiza a soma de dois numeros!\n");

    puts("Insira n1:\n");
    scanf("%f", &n1); //escaneia o valor de n1 inserido pelo usuario
    printf("Insira n2:\n");
    scanf("%f", &n2);   //escaneia o valor de n2 inserido pelo usuarios

    soma = (n1 + n2);   //realiza a soam dos dois numeros e armazena na variavel soma
    
    printf("\nA soma dos numeros '%.2f' e '%.2f' e igual a: %.2f ", n1, n2, soma); //imprime as variaveis na tela
//   printf("%.2f, %.2f", n1,n2);
}