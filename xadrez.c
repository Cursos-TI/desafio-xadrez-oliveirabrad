#include <stdio.h>

/* 
DESAFIOS ANTERIORES:

    int b = 1;
    int t = 1;

    //Movimentação do Bispo: 5 casas na diagonal superior direita
    while (b <= 5) 
    {
        printf("O Bispo se moveu 1 casa para cima e 1 para a direita, totalizando %d movimentos.\n", b);
        b++;
    }
    printf("\n");

    //Movimentação da Torre: 5 casas para a direita
    do 
    {
        printf("A Torre se moveu 1 casa para a direita, totalizando %d movimentos.\n", t);
        t++;
    } while (t <= 5);
    printf("\n");

    //Movimentação da Rainha: 8 casas para a esquerda
    for (int r = 0; r < 8; r++) 
    {   
        printf("A Rainha se moveu 1 casa para a direita, totalizando %d movimentos.\n", r + 1);
    }
    printf("\n");

    //Movimentação do Cavalo: 2 casas para cima e 1 para a direita
    for (int c = 0; c < 1; c++)
    {
        for(int c2 = 0; c2 < 2; c2++)
        {
        printf("O cavalo se moveu 1 casa para cima, totalizando %d movimentos.\n", c2 + 1);
        }
    printf("O cavalo se moveu 1 casa para a direita, totalizando %d movimentos.\n", c + 3);
    }
    printf("\n");
*/

//Movimentação do Bispo: 5 casas na diagonal superior direita
void moverbispo (int casasb)
{
    if (casasb < 6)
    {
        printf("O bispo se moveu 1 casas na diagonal, para a direita e para cima, totalizando %d movimentos.\n", casasb);
        moverbispo (casasb + 1);
    }
}

//Movimentação da Torre: 5 casas para a direita
void movertorre (int casast)
{
    if (casast < 6)
    {
        printf("A torre se moveu 1 casa para a direita, totalizando %d movimentos.\n", casast);
        movertorre (casast + 1);
    }
}

//Movimentação da Rainha: 8 casas para a esquerda
void moverrainha (int casasr)
{
    if (casasr < 9)
    {
        printf("A rainha se moveu 1 casas para a direita, totalizando %d movimentos.\n", casasr);
        moverrainha (casasr + 1);
    }
}

//Movimentação do Cavalo: 2 casas para cima e 1 para a direita
void movercavalo (int casasc1, int casasc2)
{
    if (casasc1 < 3)
    {
        printf("O cavalo se moveu 1 casas para cima, totalizando %d movimentos. \n", casasc1);
        movercavalo (casasc1 + 1, casasc2);
    } else if (casasc2 < 2)
    {
        printf("O cavalo se moveu 1 casas para a direita, totalizando %d movimentos. \n", casasc1);
    }
}

int main(){

    moverbispo (1);
    movertorre (1);
    moverrainha (1);
    movercavalo (1, 1);

    return 0;

}