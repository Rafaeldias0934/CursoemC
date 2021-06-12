# include <stdio.h>

int main ()

{

 int i;   

 float num, maior;

 printf("Entre com o numero 1: ");

 scanf ("%f",&num);

 maior = num;

 for (i=2;i<=10;i++) 

 {

 printf("Entre com o numero %d: ",i);

 scanf ("%f",&num);

 if (num>maior)

 {

    maior = num;

    printf("maior = %.2f\n",maior);

 }
 }

 printf("maior numero: %.2f\n",maior);   

 return 0;

} 