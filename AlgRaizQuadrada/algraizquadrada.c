#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float V, Vo, a, S, DS, So;

    printf("entre com os valores de Vo:");
    scanf("%f", &Vo);
    fflush(stdin);
    printf("entre com os valores de a:");
    scanf("%f", &a);
    fflush(stdin);
    printf("entre com os valores de S:");
    scanf("%f", &S);
    fflush(stdin);
    printf("entre com os valores de So:");
    scanf("%f", &So);
    fflush(stdin);
    DS = S - So;

    V = sqrt((pow(Vo, Vo) + (2 * a * DS)));

    printf("A velocidade e = %.2f", V);

    return 0;


}
