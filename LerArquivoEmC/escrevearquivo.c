#include <stdio.h>
#include <stdlib.h>
#include <string.h> //biblioteca da função strcspn

// esse é um codigo basico de escrita e leitura em arquivos
char nome[100];
int lerArquivo()
{
    int contadorlinha = 0;
    char linha[100];
    int encontrado = 0; // flag para saber se o arquivo foi encontrado
    FILE *arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 0; // Retorna 0 indicando erro
    }
    while (fgets(linha, sizeof(linha), arquivo) != NULL) //fgets lê t
    {
        contadorlinha++;
        linha[strcspn(linha, "\n")] = '\0'; // retorna o indice da posição que possui o \n
        if (strcmp(linha, nome) == 0)
        {
            printf("%s foi encontrado e esta na linha %i", nome, contadorlinha);
            encontrado = 1;
            break; // sai do loop
        }
    }

    if (!encontrado)
    {
        printf("A string %s não foi encontrada no arquivo.\n", nome);
    }
    fclose(arquivo);
    return encontrado; // retorna 1 se encontrado e 0 se nao
}
int main()
{

    FILE *arquivo = fopen("dados.txt", "a");
    int opcao;

    printf("Digite o nome a ser inserido no arquivo\n");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0'; // nome recebe a função strcspn que transforma em um vetor e percorre ate encotrar o \n e substitiur por \0

    fputs(nome, arquivo);
    fputs("\n", arquivo);
    fclose(arquivo);

    printf("tecle 1 para mostrar dados do arquivo");

    scanf("%i", &opcao);

    if (opcao == 1)
    {
        lerArquivo();
    }

    return 0;
}
