#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main(void){
    float est_med, qde_max, qde_min;

    printf("Entre com o valor da quantidade minima e maxima.\n");
    puts("\nQde Min: ");
    scanf("%f", &qde_min);
    fflush(stdin);
    puts("Qde Max: ");
    scanf("%f", &qde_max);

    fflush(stdin);

    est_med = (qde_min + qde_max)/2;

    printf("O estoque medio e: %.0f", est_med);

    return 0;
}