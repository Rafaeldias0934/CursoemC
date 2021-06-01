
#include<stdio.h>
int main()
{ 
  int x,y;

printf("\n Digite um número para x:\n");
scanf("%d",&x); 

if (x % 2 == 0 && x % 3 ==0)
{
    printf("O número digitado é %d, logo é Par, e divisível por 3.\n",x);
}
else if (x % 2 == 0 && x % 3 ==1)
{
    printf("O número digitado é %d, logo é Par, e não é divisível por 3.\n",x);
}
else if (x % 2 == 1 && x % 3 ==0)
{
    printf("O número digitado é %d, logo é Impar, e divisível por 3.\n",x);
}
else 
{
    printf("O número digitado é %d, logo é Impar, e não é divisível por 3.\n",x);
}
 return 0; 
}
