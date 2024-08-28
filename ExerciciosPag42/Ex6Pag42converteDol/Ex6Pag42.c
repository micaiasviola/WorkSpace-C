#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float real, cot, dol;
    printf("Conversão real/dolar...\n");
    printf("\n");
    puts("Insira o valor em reais: ");
    scanf("%f", &real);
    printf("\n");
    printf("Insira a cotacao atual do dolar: ");
    scanf("%f", &cot);

    dol = real / cot;
    printf("O valor de %.2f em dolares e : %.2f", real, dol);
    
    return 0;
}
