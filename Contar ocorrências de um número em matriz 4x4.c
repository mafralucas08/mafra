#include <stdio.h>

int contarOcorrencias(int matriz[4][4], int num) {
    int cont = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == num) {
                cont++;
            }
        }
    }
    return cont;
}

int main() {
    int matriz[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,2,2,3},
        {4,5,6,2}
    };

    int num;
    printf("Digite o numero a procurar: ");
    scanf("%d", &num);

    printf("O numero %d aparece %d vezes.\n", num, contarOcorrencias(matriz, num));
    return 0;
}
