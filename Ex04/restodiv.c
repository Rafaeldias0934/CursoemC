#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,resto;
 
    printf("Calcular o Resto da Divisão de x por y:\n");
    printf("Digite o valor de x:\n");
    scanf("%d",&x);

    printf("Digite o valor de y:\n");
    scanf("%d",&y);

    resto = x % y;

    printf("Os valores digitado foi %d e %d, O Resto da Divisão de x / y é: %d!\n",x,y,resto);

    return 0;
}