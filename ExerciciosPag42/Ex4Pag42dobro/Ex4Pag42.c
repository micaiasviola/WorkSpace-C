#include <stdio.h>
#include <stdlib.h> //contem a fun��o RAND()
#include <math.h>
#include <locale.h>
#include <conio.h>
#include <time.h> //contem a biblioteca de tempo


main(){

    setlocale(LC_ALL, "");

    srand(time(NULL)); //fun��o que inicializa o gerador de numeros aleatorios

    int x = rand(); //armazena um numero aleatorio gerado pela fun��o rand(), na variavel
    int dobro;
    printf("Pressione Enter para gerar um numero aleat�rio...\n");
    fflush(stdin);
    // Aguarda a entrada do usu�rio
    getchar();
    printf("\nO n�mero gerado foi: %d", x);
    dobro = x * 2;
    printf("\nO dobro de %d � igual a : %d\n", x, dobro);

    system("pause");
    exit(0);
}
