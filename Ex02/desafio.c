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

/*
#include<stdio.h>
int main()
{ 
  int x,y;


printf("\n Digite um número para x:\n");
scanf("%d",&x); 

printf("\n Digite um número para y:\n");
scanf("%d",&y); 

if (x % y == 0 && x % 3 ==0)
    printf("O número digitado é %d, então ele é Par e divisivel por 3.",x);
else
     printf("O número digitado é %d, logo não é Par, e nem Divisivel por 3.",x);
 
 return 0; 
}
*/

/*

    

if (velocidade_media > 110)
    printf("A velocidade média é %d, então ela é superior a 110km/h.",velocidade_media);
else
     printf("A velocidade média é %d, então ela é não superior a 110km/h.",velocidade_media);
 
 return 0; 
}
*/