#include <stdio.h>
#include <math.h>
#include <conio.h>

int main (){

int a;
float F, K, C;

//C = (5*F-160)/9;
//K = C + 32;
//F = (C*9 + 160)/5;

printf("Qual temperatura deseja converter? \n 1-- para Celsius \n 2-- para Fahrenheit \n 3-- para Kelvin \n ");
scanf ("%d", &a);

switch (a) {
case 1 :

    printf("Digite a temperatura em Celsius: \n");
    scanf ("\n%d", &a);

     F = (a * 9/5) + 32;
     K = a + 273,15;
     printf ("Fahrenheit %.2f", F);
     printf ("\nKelvin %.2f", K);
     break;

case 2 :

    printf("Digite a temperatura em Fahrenheit :\n");
    scanf ("\n%d", &a);
    C = (a - 32) * 5/9;
    K = (a - 32) * 5/9 + 273,15;
    printf ("Celsius %.2f", C);
    printf("\nkelvin %.2f", K);
    break;

case 3 :

    printf("Digite a temperatura em Kelvin :\n");
    scanf ("\n%d", &a);

    C = a - 273,15;
    F = (a - 273,15) * 9/5 + 32;
    printf ("Celsius %.2f", C);
    printf("\nFahrenheit %.2f", F);
    break;
    
    default : 
        printf("\nDigite uma opcao valida!");
        break;
}return 0;
}