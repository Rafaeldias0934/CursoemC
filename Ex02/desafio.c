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
#include <stdio.h>

int main()
{
    int cont;
    
    printf("Digite um valor para testar o contador:\n");
    scanf("%d",&cont);

    for (cont; cont <= 10; cont++)
    printf("%d ",cont);
    
    
    return 0;
}
  while (cont <= 10)
    
    {
        printf("%d ",cont);
        cont++;
    }


#include <stdio.h>

int main()
{
   int i,num,num_impar=0;
   
    printf("Digite um Número <10 e >1:\n");
    scanf ("%d",&num);
    
    for (num;num<=10; num++)
    {
       // printf("%d",num);
        if (num%2!=0)
    }
    
    printf("Os números impares são: %d", num);
    return 0;
}


for (i=1; i<=10; i++)
    {
        printf("Digite um Número <10 e >1:\n");
        scanf ("%d",&num);
        
        if (num%2!=0)
        num_impar=num_impar +1;
    }
    
    printf("O total de impares digitados é: %d ", num_impar);
    
*/