#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void){
    
    int num, result;

    printf("\n\n\tPROGRAMA PARA DESCOBRIR SE O NUMERO E PAR OU IMPAR!!!\n\n");


    printf("\tInforme o numero desejado: ");
    scanf("%i", &num);

    result = num % 2;

    if(result == 0){
        printf("\n\n\tO numero %i e par!", num);
    }else{
        printf("\n\n\tO numero %i e impar!", num);
    }
    return 0;
}