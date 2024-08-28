#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
    float n1, n2 ,n3 ,n4, media;

    puts("Insira as 4 notas:\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4); 
    fflush(stdin); //limpa o buffer
    if (n1 && n2 && n3 && n4 > 0) //condição de controle. Impede o usuario de inserir caracteres inválidos.
    {
        fflush(stdin);
        media = (n1 + n2 + n3 +n4)/4;
        printf("Sua media e: %.2f", media);
    }else{
        printf("Insira apenas notas validas!");
    }
    
    
    return 0;
}
