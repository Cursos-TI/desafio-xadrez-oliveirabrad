#include <stdio.h>

int main(){

    int b = 1;
    int t = 1;

    //Movimentação do Bispo: 5 casas na diagonal superior direita
    while (b <= 5) {
        printf("O Bispo se moveu 1 casa para cima e 1 para a direita, totalizando %d movimentos.\n", b);
        b++;
    }
    printf("\n");

    //Movimentação da Torre: 5 casas para a direita
    do {
        printf("A Torre se moveu 1 casa para a direita, totalizando %d movimentos.\n", t);
        t++;
    } while (t <= 5);
    printf("\n");

    //Movimentação da Rainha: 8 casas para a esquerda
    for (int r = 0; r < 8; r++) {   
        printf("A Rainha se moveu 1 casa para a direita, totalizando %d movimentos.\n", r + 1);
    }

return 0;

}