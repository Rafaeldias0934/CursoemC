#include<stdio.h>
int main() 
{
    int velocidade_media;
    
    printf("Digite a sua velocidade na viagem em (km/h):\n");
    scanf("%d",&velocidade_media);

if (velocidade_media > 110)
    printf("A velocidade média é %d, então ela é superior a 110km/h.\n",velocidade_media);
else
     printf("A velocidade média é %d, então ela é não superior a 110km/h.\n",velocidade_media);
 
 return 0; 
}
