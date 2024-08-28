#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
// Fun��o para desenhar a logomarca da empresa ACME


void desenharLogomarca() {
    printf("====================================\n");
    printf("     _    ____  _______ ____  ______\n");
    printf("    / \\  / ___||__   __/ __ \\|  ____|\n");
    printf("   / _ \\ \\___ \\   | | | |  | | |__\n");
    printf("  / ___ \\ ___) |  | | | |  | |  __|\n");
    printf(" /_/   \\_\\____/   |_| |_|  |_|_\n");
    printf("\n");
    printf("====================================\n");
}

// Fun��o para mostrar o menu de opera��es administrativas
void mostrarMenu() {
    printf("Escolha uma das op��es abaixo:\n");
    printf("1. Adicionar novo usu�rio\n");
    printf("2. Remover usu�rio\n");
    printf("3. Listar usu�rios\n");
    printf("4. Atualizar informa��es do usu�rio\n");
    printf("5. Sair\n");
    printf("Digite sua op��o (1-5): ");
}

int main() {
    setlocale(LC_ALL, "");
    int opcao;

    // Desenhar a logomarca
    desenharLogomarca();

    // Mostrar o menu
    while (1) { //while(1) o looping roda infinitamente at� um comando de parada como: exit(0)
        mostrarMenu();

        // Ler a op��o do usu�rio
        scanf("%d", &opcao);

        // Processar a op��o do usu�rio
        switch(opcao) {
            case 1:
                printf("\nOp��o 1 selecionada: Adicionar novo usu�rio.\n");
                break;
            case 2:
                printf("\nOp��o 2 selecionada: Remover usu�rio.\n");
                break;
            case 3:
                printf("\nOp��o 3 selecionada: Listar usu�rios.\n");
                break;
            case 4:
                printf("\nOp��o 4 selecionada: Atualizar informa��es do usu�rio.\n");
                break;
            case 5:
                printf("\nSaindo do programa...\n");
                exit(0);
            default:
                printf("\nOp��o inv�lida! Tente novamente.\n");
                break;
        }
    }

    return 0;
}
