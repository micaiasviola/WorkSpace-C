#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
#include <time.h>


int main() {

    float comprimento, largura, area;


    printf("Digite o comprimento da sala (em metros): ");
    scanf("%f", &comprimento);


    printf("Digite a largura da sala (em metros): ");
    scanf("%f", &largura);


    area = comprimento * largura;


    printf("A área da sala é: %.2f metros quadrados\n", area);

    return 0;
}
