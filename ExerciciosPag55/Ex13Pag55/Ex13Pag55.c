#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    int numero;

    printf("Escreva o numero: \n");
    scanf("%i", &numero);

    if(numero > 10){
        printf("O numero %i e maior do que 10", numero);//condição de maior
    }else if(numero == 10){
        printf("O numero %i e igual a 10", numero);//condição de indentico
    }else{
        printf("O numero %i e menor do que 10!", numero);
    }
    return 0;
}