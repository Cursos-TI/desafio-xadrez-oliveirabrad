#include <stdio.h>

int main() {
    
    //Movimentação do Bispo: 5 casas na diagonal superior direita
    for (int b = 0; b < 5; b++) {   
        printf("O Bispo se moveu 1 casa para cima e direita, totalizando %d movimentos.\n", b + 1);
    }
    printf("\n");

    //Movimentação da Torre: 5 casas para a direita
    for (int t = 0; t < 5; t++) {   
        printf("A Torre se moveu 1 casa para a direita, totalizando %d movimentos.\n", t + 1);
    }
    printf("\n");

    //Movimentação da Rainha: 8 casas para a esquerda
    for (int r = 0; r < 8; r++) {   
        printf("A Rainha se moveu 1 casa para a direita, totalizando %d movimentos.\n", r + 1);
    }

    return 0;
}
