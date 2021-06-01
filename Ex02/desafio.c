#include<stdio.h>

int main () {
    
    int num1,num2,produto;

    printf("Calcular a multiplicação de x e y:\n");
    printf("Digite o valor de x:\n");
    scanf("%d",&num1);
    
    printf("Digite o valor de y:\n");
    scanf("%d",&num2);

    produto = num1 * num2;

    printf("Os valores digitado foi %d e %d, O produto da multiplicação de x * y é: %d!\n",num1,num2,produto);

    return 0;
}