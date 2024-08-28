#include <stdio.h>#include <conio.h>#include<math.h>#include<locale.h>#include<stdlib.h>

main(){
    float n1, n2, n3, media;

    puts("\tInforme n1: \n");
    scanf("%f", &n1);
    puts("\tInforme n2: \n");
    scanf("%f", &n2);
    puts("\tInforme n3: \n");
    scanf("%f", &n3);

    media = (n1+n2+n3)/3;

    printf("A media é: %.2f", media);
}
