#include <stdio.h>
#include <conio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>


int main(){
    setlocale(LC_ALL, "");
    int i; //contador
    char caracter[3];

    //looping que roda ate 3 vezes para inserir os char
    for(i = 0; i < 3; i++){

        printf("\nn%d\n", i + 1);
        caracter[i] = getch();
        printf("\n*\n");
        printf("\n%c\n", caracter[i]);
    }
    system("cls");

    printf("\n \tOs caracteres na ordem inversa são: ");
   
    //looping para percorrer o vetor de traz para frente.
    for(i=2; i>=0; i--){
        printf("%c", caracter[i]);
    }
    printf("\n\t\a");
    return 0;
}