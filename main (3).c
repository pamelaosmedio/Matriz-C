#include <stdio.h>

int main() {
    float matriz[4][4];
    int i, j;
    float soma_impar = 0, soma_par = 0;

    printf("Digite os valores da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }
    for (j = 0; j < 4; j++) {
        for (i = 0; i < 4; i++) {
            if (j % 2 == 0) {
                soma_par += matriz[i][j];
            } else {
                soma_impar += matriz[i][j];
            }
        }
    }

   
    printf("A soma dos elementos da coluna par eh %.2f\n", soma_par);
    printf("A soma dos elementos da coluna impar eh %.2f\n", soma_impar);

    return 0;
}