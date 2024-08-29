
#include <stdio.h>

int main() {
    int numFolhas;
    double custoTotal;

    // Solicita ao usuário o número de folhas
    printf("Digite o número de folhas: ");
    scanf("%d", &numFolhas);

    // Verifica o número de folhas e calcula o custo total
    if (numFolhas <= 100) {
        custoTotal = numFolhas * 0.25;
    } else {
        // Calcula o custo das primeiras 100 folhas a R$ 0,25 cada e o restante a R$ 0,20 cada
        custoTotal = (100 * 0.25) + ((numFolhas - 100) * 0.20);
    }

    // Exibe o custo total
    printf("O valor total a ser pago é: R$ %.2f\n", custoTotal);

    return 0;
}