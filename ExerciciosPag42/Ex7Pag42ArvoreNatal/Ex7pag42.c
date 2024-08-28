#include <stdio.h>

int main() {
    int i, a, altura, espacos;
    //i, contador de looping
    //a, contador da função que imprime os asteriscos
    //espacos, contador da função que imprime os espaços na tela
    altura = 20;
    
    // Desenhe a parte superior da árvore
    for (i = 1; i <= altura; i++) {
        // Imprime os espaços antes dos asteriscos
        for (espacos = 1; espacos <= altura - i; espacos++) {
            printf(" ");
        }
        // Imprime os asteriscos
        for (a = 1; a <= 2 * i - 1; a++) {
            printf("*");
        }
        // Muda para a próxima linha
        printf("\n");
    }

    // Desenhe o tronco da árvore
    for (i = 1; i <= 3; i++) {
        for (espacos = 1; espacos < altura - 1; espacos++) {
            printf(" ");
        }
        printf("***\n");
    }

    return 0;
}