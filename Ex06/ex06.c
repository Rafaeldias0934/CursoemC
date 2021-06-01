#include<stdio.h>

int main () {

    int base,altura,produto;

    printf("Para Calcular a área dos terrenos da Imobiliária Imóbilis:\n");

    printf("Digite o valor da base do retângulo em (cm²)\n");
    scanf("%d",&base);

    printf("Digite o valor da altura do retângulo em (cm²)\n");
    scanf("%d",&altura);

    produto = base * altura;

    printf("Os valores digitado foi %d e %d, a área do retângulo é: %dm²!\n",base,altura,produto);

    return 0;
}
