#include<stdio.h>
int main()
{ 
  float med1,med2,med3,ma, mp;
  int op;


printf("Digite a sua média da primeira unidade:\n");
scanf("%f",&med1);

printf("Difgite a sua média da segunda unidade:\n");
scanf("%f", &med2);

printf("Digite a sua média da terceira unidade:\n");
scanf("%f",&med3);

ma = (med1 + med2 + med3) / 3;
mp = (med1 * 3 + med2 * 3 + med3 * 4) / 10;

printf("Digite 1 para média Aritmetica, ou 2 para média Ponderada:\n");
scanf("%d",&op);

switch (op)
{
case 1:
  printf("Sua média Aritmetica é %2.2f:\n ",ma);
  break;

case 2:
  printf("Sua média Ponderada é %2.2f:\n ",mp);
  break;

default:
  printf("%d Número Invalido ",op);
  break;
}
return 0;
}
