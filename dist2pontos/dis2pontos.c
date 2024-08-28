#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    
    float x2, x1, y2, y1, d;
    d = 0;
    printf("Entre com os pontos x1, y1 e x2,y2");
    
    puts("\nx1: ");
    scanf("%f", &x1);
    
    fflush(stdin);
    
    puts("\ny1: ");
    scanf("%f", &y1);
    
    fflush(stdin);

    puts("\nx2: ");
    scanf("%f", &x2);
    
    fflush(stdin);

    puts("\ny2: ");
    scanf("%f", &y2);
    
    fflush(stdin);

    d = sqrt((pow(x1 -x2, 2)) + (pow(y2- y1, 2)));

    printf("A distancia entre os dois pontos e: %f", d);

    return 0;
}
