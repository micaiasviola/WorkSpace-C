#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    char operacao;
    float n1,n2, result;
    printf("\tInforme a operacao desejada!\n");
    printf("\tTecle o caracter desejado conforme a operação: \n");


    printf("\t '*' para MULTIPLICACAO\n\n");
    printf("\t '/' para DIVISAO\n\n");
    printf("\t '+' para ADICAO\n\n");
    printf("\t '-' para SUBTRACAO\n\n");

    operacao = getch();
   

    // printf("%c", operacao);

    switch (operacao)
    {
    case '*':

        system("cls");
        puts("\t\nInsira os numeros que deseja multiplicar: \n\n");
       
        scanf("\t%f\t%f", &n1, &n2);
        result = (n1*n2);
        printf("\tO resultado de %.2f multiplicado por %.2f e igual a: %.2f\n\n",n1,n2,result);
        break;
    case '/':
        system("cls");
        puts("\t\nInsira os numeros que deseja dividir: \n\n");
       
        scanf("\t%f\t%f", &n1, &n2);
        result = (n1/n2);
        printf("\tO resultado de %.2f dividido por %.2f e igual a: %.2f\n\n",n1,n2,result);
        break;
    case '+':
        system("cls");
        puts("\t\nInsira os numeros que deseja somar: \n\n");
       
        scanf("\t%f\t%f", &n1, &n2);
        result = (n1+n2);
        printf("\tO resultado de %.2f mais %.2f e igual a: %.2f\n\n",n1,n2,result);
        break;
    case '-':
        system("cls");
        puts("\t\nInsira os numeros que deseja subtrair: \n\n");
       
        scanf("\t%f\t%f", &n1, &n2);
        result = (n1-n2);
        printf("\tO resultado de %.2f menos %.2f e igual a: %.2f\n\n",n1,n2,result);
        break;
    
    default:
        printf("Insira apenas caracteres validos!");
        break;
    }

    return 0;
}