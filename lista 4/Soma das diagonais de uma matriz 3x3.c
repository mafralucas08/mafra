#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 9, 7, 8},
        {10, 6, 11, 13},
        {15, 12, 14, 16}
    };

    int maior = matriz[0][0];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior elemento = %d\n", maior);
    return 0;
}
