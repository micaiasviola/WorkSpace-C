#include <stdio.h>
#include <conio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
    float n1, n2;

    printf("\tInsira n1\n");
    scanf("%f", &n1);
    
    printf("\tInsira n2\n");
    scanf("%f", &n2);

    if(n1 != n2){//se n1 for diferente de n2 entao
        printf("%.2f é diferente de %.2f", n1, n2);
    }else{
        printf("%.2f é igual a %.2f", n1,n2);
    }
    return 0;
}
