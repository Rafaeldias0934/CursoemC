#include<stdio.h>
int main()
{ 
  int DiaSem;


printf("\n Digite o número de 01 a 07, referente ao dia da semana:\n");
scanf("%d",&DiaSem);

switch (DiaSem){
    case 1:
    printf("O dia da semana correspondente a %d, é Domingo, Final de Semana.",DiaSem);
    break;
    case 2:
    printf("O dia da semana correspondente a %d, é Segunda-feira, um dia Útil.",DiaSem);
    break;
    case 3:
    printf("O dia da semana correspondente a %d, é Terça-feira, um dia Útil.",DiaSem);
    break;
    case 4:
    printf("O dia da semana correspondente a %d, é Quarta-feira, um dia Útil..",DiaSem);
    break;
    case 5:
    printf("O dia da semana correspondente a %d, é Quinta-feira, um dia Útil..",DiaSem);
    break;
    case 6:
    printf("O dia da semana correspondente a %d, é Sexta-feira, um dia Útil..",DiaSem);
    break;
    case 7:
    printf("O dia da semana correspondente a %d, é Sábado, Final de Semana..",DiaSem);
    break;
    default :
    printf ("Número invalido!\n");
  }
}