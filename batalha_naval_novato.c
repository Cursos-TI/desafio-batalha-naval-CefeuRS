#include <stdio.h>

int main() {
    // criando o tabuleiro 5x5
    int tabuleiro[5][5] = {0}; // tudo começa vazio, por isso preenchi com 0

    // posicionando navio vertical (3 casas)
    // ele vai ocupar a coluna 1 nas linhas 0,1,2
    tabuleiro[0][1] = 1;
    tabuleiro[1][1] = 1;
    tabuleiro[2][1] = 1;

    // posicionando navio horizontal (3 casas)
    // ele vai ocupar a linha 4 nas colunas 2,3,4
    tabuleiro[4][2] = 1;
    tabuleiro[4][3] = 1;
    tabuleiro[4][4] = 1;

    // exibindo as coordenadas do navio vertical
    printf("Coordenadas do navio vertical:\n");
    printf("(0,1)\n");
    printf("(1,1)\n");
    printf("(2,1)\n");

    // exibindo as coordenadas do navio horizontal
    printf("\nCoordenadas do navio horizontal:\n");
    printf("(4,2)\n");
    printf("(4,3)\n");
    printf("(4,4)\n");

    // pra segurar o terminal aberto (caso precise rodar direto no exe)
    printf("\nPressione ENTER pra sair...");
    getchar();

    return 0;
}
