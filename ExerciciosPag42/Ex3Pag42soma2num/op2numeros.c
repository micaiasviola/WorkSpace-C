#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

main(){
    setlocale(LC_ALL, "");
    puts("Este programa mostra 4 opera��es matematicas entre 2 numeros");

    float soma, n1, n2, div, sub, x;

    printf("insira o valor de n1: \n");
    scanf("%f", &n1);
    fflush(stdin);
    printf("insira o valor de n2: \n");
    scanf("%f", &n2);
    fflush(stdin);

    if((n1 && n1) != 0){
        soma = n1 + n2;
        div = n1 / n2;
        x = n1 * n2;
        sub = n1 - n2;
        printf("\n   Soma          --- %.2f + %.2f = %.2f \n", n1, n2, soma);
        printf("   Subtra��o     --- %.2f - %.2f = %.2f \n", n1, n2, sub);
        printf("   Multiplica��o --- %.2f / %.2f = %.2f \n", n1, n2, x);
        printf("   Divis�o       --- %.2f * %.2f = %.2f \n", n1, n2, div);


    }else{
        puts("Valor inv�lido!");
        exit(0);
    }

}
