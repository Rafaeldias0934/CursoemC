#include <stdio.h>

int main () {
    //imprime o cabeçalho do nosso jogo
    printf("*********************************\n");
    printf("*Bem vindo ao jogo de Advinhação*\n");
    printf("*********************************\n");

    int chute,numerosecreto = 42, i;
   
    for (i = 1; i <= 3; i++)    
    {
        printf("qual é o chute?\n");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == numerosecreto);

        if (acertou) {
            printf("Parabens, Você acertou!!\n");
            printf("Jogue de novo, voce é um bom jogador!!\n");
        }
        else {
            
            int menor = chute < numerosecreto;
            if (menor) {
               printf("Seu chute é MENOR do que o número secreto\n");
               printf("Não desanime,tente novamente!!\n");
            } else {
                printf("Seu chute é MAIOR do que o número secreto\n");
                printf("Não desanime,tente novamente!!\n");
            }
        }     
    }
  
}

/*
#include <stdio.h>

int main () {
    //imprime o cabeçalho do nosso jogo
    printf("*********************************\n");
    printf("*Bem vindo ao jogo de Advinhação*\n");
    printf("*********************************\n");

    int chute,numerosecreto = 42, i = 1;
   
   while(i<=3) {
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
    
        int acertou = (chute == numerosecreto);
    
        if (acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
        }
        else {
            int maior = chute > numerosecreto;
            if(maior) {
                printf("Seu chute foi maior que o número secreto\n");
            } else {
                printf("Seu chute foi menor que o número secreto\n");
            }
        }
        i++;
   }
    printf("Fim do jogo!!");
}
*/