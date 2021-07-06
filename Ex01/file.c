#include <stdio.h>
#define TENTATIVAS 5

int main () {
    //imprime o cabeçalho do nosso jogo
    printf("*********************************\n");
    printf("*Bem vindo ao jogo de Advinhação*\n");
    printf("*********************************\n");

    int chute,numerosecreto = 42, i;
   
    for (i = 1; i <= TENTATIVAS; i++)    
    {
        printf("tentativa %d de %d\n", i,TENTATIVAS);
        printf("qual é o chute?\n");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == numerosecreto);

        if (acertou) {
            printf("Parabens, Você acertou!!\n");
            printf("Jogue de novo, voce é um bom jogador!!\n");
            break;
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
    printf("Fim do jogo\n");
}
