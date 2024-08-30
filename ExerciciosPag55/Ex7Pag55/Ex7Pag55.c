#include <stdio.h>
#include <conio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

int main() {
    double r;  // exemplo de raio
    
    printf("Insira o raio: ");
    scanf("%f", &r);
    double area = M_PI * r * r;
    printf("A area do círculo com raio %.2f e %.2f\n", r, area);
    return 0;
}