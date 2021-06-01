   #include<stdio.h>
    
    int main(){

    char nome[8];
    int ano_nascimento,ano_atual, ano_selecionado,idade;
    
    printf("Digite seu nome:\n");
    scanf("%s",nome);

    printf("Bem vindo %s!\n",nome);

    printf("Digite agora sua idade:\n");
    scanf("%i",&idade);
    
    printf("Digite o ano que voce nasceu:\n");
    scanf("%i",&ano_nascimento);

    printf("Digite o ano que voce quer saber sua idade:\n");
    scanf("%i",&ano_selecionado);

    ano_atual = (ano_selecionado - ano_nascimento);

    printf("Sua idade em: %i é: %i\n",ano_selecionado, ano_atual);

    return 0;
}
