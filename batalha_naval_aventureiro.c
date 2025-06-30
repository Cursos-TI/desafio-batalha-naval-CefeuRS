#include <stdio.h>

int main() {
    // criando o tabuleiro 10x10, tudo começa como 0
    int tabuleiro[10][10] = {0};

    // navio 1 - vertical (4 casas) na coluna 2
    tabuleiro[0][2] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[3][2] = 3;

    // navio 2 - horizontal (4 casas) na linha 6
    tabuleiro[6][1] = 3;
    tabuleiro[6][2] = 3;
    tabuleiro[6][3] = 3;
    tabuleiro[6][4] = 3;

    // navio 3 - diagonal principal (4 casas)
    // começa em (0,0) e vai pra (3,3)
    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[3][3] = 3;

    // navio 4 - diagonal secundaria (4 casas)
    // começa em (0,9) e vai pra (3,6)
    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;
    tabuleiro[3][6] = 3;

    // mostrando o tabuleiro inteiro
    printf("Tabuleiro de Batalha Naval (10x10):\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // pausa pra conseguir ver o resultado
    printf("\nPressione ENTER pra sair...");
    getchar();

    return 0;
}
