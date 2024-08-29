#include <stdio.h>
#include <conio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

main(){
    int idade;

    printf("Informe a sua idade: \n");
    scanf("%d", &idade);

    if(idade <= 13){
        
        printf("\t %d anos, categoria infantil!\n", idade);

    }else if(idade <= 17){
        
        printf("\t %d anos, categoria juvenil!\n", idade);

    }else{
        printf("\t %d anos, categoria senior!\n", idade);
    }
}