#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>


 int main(void){
    setlocale(LC_ALL,"");
        int n;
        puts("Escolha o numero correspondente ao seu time de futebol!\n"); 
        puts("1 Botafogo    ---   2 Corinthians\n");  
        puts("3 Palmeiras   ---   4 Gremio\n");
        scanf("%i", &n);


        switch (n)
        {
             case 1 :
            printf("\nO time escolhido foi: Botafogo");
            break;
             case 2 :
            printf("\nO time escolhido foi: Corinthians");
            break;
             case 3 :
            printf("\nO time escolhido foi: Palmeiras");
            break;
             case 4 :
            printf("\nO time escolhido foi: Gremio");
            break;

            default: printf("Escolha um numero valido");
        }
            
        return 0;
    

}