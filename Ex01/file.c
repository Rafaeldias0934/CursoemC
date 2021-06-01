#include <stdio.h>

int main () {
    //imprime o cabeçalho do nosso jogo
    printf("*********************************\n");
    printf("*Bem vindo ao jogo de Advinhação*\n");
    printf("*********************************\n");

    int numerosecreto = 42;
    int chute;
    printf("qual é o chute?\n");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);
    
}