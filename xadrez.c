#include <stdio.h>
int main()
{
    int movimentobispo = 1;
    int movimentorainha = 1;
    int movimentocavalo;
    int segundomovimento;
    
    // mover a torre 
    printf("Movendo a torre:\n");
    for (int movimentotorre = 1; movimentotorre <= 5; movimentotorre++)
    {
        printf("Passo: %d direita!\n", movimentotorre); //imprime a direção do movimento
    }

    // mover o bispo
    printf("\nMovendo o Bispo:\n");
    do {
        printf("Passo: %d cima, direita!\n",movimentobispo);  //imprime a direção do movimento
        movimentobispo++;
    } while (movimentobispo <= 5);

    //mover a rainha
    printf("\nMovendo a Rainha:\n");
    while (movimentorainha <= 8)
    {
        printf("Passo: %d Esquerda!\n", movimentorainha); //imprime a direção do movimento
        movimentorainha++;
    }
    
    //mover o cavalo
    printf("\nMovendo o Cavalo:\n");
    for (movimentocavalo = 1; movimentocavalo <= 2; movimentocavalo++) {
        printf("Passo: %d cima\n", movimentocavalo); //imprime a direção do movimento cima
    }    
    do {
        printf("Passo: %d direita!\n",movimentocavalo);  //imprime a direção do movimento direita
                movimentocavalo++;
            } while (movimentobispo <= 1);

    return 0;
}