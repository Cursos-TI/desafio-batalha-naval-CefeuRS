#include <stdio.h>

int main() {
    // aqui vai as matrizes com as habilidades especiais
    // tudo com 5x5 entao vou fazer 3 matrizes separadas

    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};

    // habilidade cone
    // o centro ta mais em baixo
    cone[0][2] = 1;
    cone[1][1] = 1;
    cone[1][2] = 1;
    cone[1][3] = 1;
    cone[2][0] = 1;
    cone[2][1] = 1;
    cone[2][2] = 1;
    cone[2][3] = 1;
    cone[2][4] = 1;

    // habilidade cruz
    // o centro é a linha do meio
    cruz[0][2] = 1;
    cruz[1][2] = 1;
    cruz[2][0] = 1;
    cruz[2][1] = 1;
    cruz[2][2] = 1;
    cruz[2][3] = 1;
    cruz[2][4] = 1;
    cruz[3][2] = 1;
    cruz[4][2] = 1;

    // habilidade octaedro
    // parece um losango
    octaedro[0][2] = 1;
    octaedro[1][1] = 1;
    octaedro[1][2] = 1;
    octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    // mostrando a habilidade cone
    printf("Habilidade: Cone\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // mostrando a habilidade cruz
    printf("Habilidade: Cruz\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // mostrando a habilidade octaedro
    printf("Habilidade: Octaedro\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    // so pra segurar a tela no final
    printf("\nPressione ENTER pra sair...");
    getchar();

    return 0;
}
