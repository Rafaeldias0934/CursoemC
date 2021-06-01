#include <stdio.h>

int main()

{

  float base,altura,area;

   

  printf("Calcular a área de um triangulo:\n");

  printf("Digite o valor da base do triangulo(cm²):\n");

  scanf("%f",&base);

  printf("Digite o valor da altura do triangulo(cm²):\n");

  scanf("%f",&altura);

  area = (base * altura) / 2;

  printf(" A Área do triangulo é: %4.2fm²\n",area);

  return 0;

}