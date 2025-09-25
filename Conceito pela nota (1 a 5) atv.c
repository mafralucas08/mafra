/* conceito.c */
#include <stdio.h>

int main(void) {
    int nota;
    printf("Digite a nota (1-5): ");
    if (scanf("%d", &nota) != 1) return 0;

    switch (nota) {
        case 1: printf("Pessimo\n"); break;
        case 2: printf("Ruim\n"); break;
        case 3: printf("Bom\n"); break;
        case 4: printf("Muito bom\n"); break;
        case 5: printf("Excelente\n"); break;
        default: printf("Nota invalida\n"); break;
    }
    return 0;
}
