#include <stdio.h>

// Função recursiva para movimentar o Bispo (movimento diagonal)
void movimentoBispo(int casas){
    if (casas > 0){
        printf("Cima, Direita\n"); // O bispo se move na diagonal superior direita
        movimentoBispo(casas - 1); // Chamada recursiva para continuar o movimento
    }
}

// Função recursiva para movimentar a Torre (movimento horizontal)
void movimentotorre(int casas){
    if (casas > 0){
        printf("Direita\n"); // A torre se move para a direita
        movimentotorre(casas - 1); // Chamada recursiva para continuar o movimento
    }
}

// Função recursiva para movimentar a Rainha (movimento horizontal)
void movimentoRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n"); // A rainha se move para a esquerda
        movimentoRainha(casas - 1); // Chamada recursiva para continuar o movimento
    }
}

int main() {
    int movimentocavalo = 1; // Variável para controlar o movimento do cavalo

    // Movimentação do Bispo
    printf("\nMovimentando o Bispo\n");
    movimentoBispo(5); // Movimenta o bispo por 5 casas

    // Movimentação da Torre
    printf("\nMovimentando a Torre\n");
    movimentotorre(5); // Movimenta a torre por 5 casas

    // Movimentação da Rainha
    printf("\nMovimentando a Rainha\n");
    movimentoRainha(8); // Movimenta a rainha por 8 casas

    // Movimentação do Cavalo
    //mover o cavalo
    printf("\nMovendo o Cavalo:\n");
    for (movimentocavalo = 1; movimentocavalo <= 2; movimentocavalo++) 
    {
        printf("Passo: %d cima\n", movimentocavalo); //imprime a direção do movimento cima
    }    
    do {
        printf("Passo: %d direita!\n",movimentocavalo);  //imprime a direção do movimento direita
                 movimentocavalo++;
        
        } while (movimentocavalo <= 1);

    return 0;
}
