
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
