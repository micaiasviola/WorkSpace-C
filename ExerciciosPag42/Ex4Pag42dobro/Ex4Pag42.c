#include <stdio.h>
#include <stdlib.h> //contem a função RAND()
#include <math.h>
#include <locale.h>
#include <conio.h>
#include <time.h> //contem a biblioteca de tempo


main(){

    setlocale(LC_ALL, "");

    srand(time(NULL)); //função que inicializa o gerador de numeros aleatorios

    int x = rand(); //armazena um numero aleatorio gerado pela função rand(), na variavel
    int dobro;
    printf("Pressione Enter para gerar um numero aleatório...\n");
    fflush(stdin);
    // Aguarda a entrada do usuário
    getchar();
    printf("\nO número gerado foi: %d", x);
    dobro = x * 2;
    printf("\nO dobro de %d é igual a : %d\n", x, dobro);

    system("pause");
    exit(0);
}
