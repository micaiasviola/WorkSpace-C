#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
// Função para desenhar a logomarca da empresa ACME


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

// Função para mostrar o menu de operações administrativas
void mostrarMenu() {
    printf("Escolha uma das opções abaixo:\n");
    printf("1. Adicionar novo usuário\n");
    printf("2. Remover usuário\n");
    printf("3. Listar usuários\n");
    printf("4. Atualizar informações do usuário\n");
    printf("5. Sair\n");
    printf("Digite sua opção (1-5): ");
}

int main() {
    setlocale(LC_ALL, "");
    int opcao;

    // Desenhar a logomarca
    desenharLogomarca();

    // Mostrar o menu
    while (1) { //while(1) o looping roda infinitamente até um comando de parada como: exit(0)
        mostrarMenu();

        // Ler a opção do usuário
        scanf("%d", &opcao);

        // Processar a opção do usuário
        switch(opcao) {
            case 1:
                printf("\nOpção 1 selecionada: Adicionar novo usuário.\n");
                break;
            case 2:
                printf("\nOpção 2 selecionada: Remover usuário.\n");
                break;
            case 3:
                printf("\nOpção 3 selecionada: Listar usuários.\n");
                break;
            case 4:
                printf("\nOpção 4 selecionada: Atualizar informações do usuário.\n");
                break;
            case 5:
                printf("\nSaindo do programa...\n");
                exit(0);
            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }
    }

    return 0;
}
