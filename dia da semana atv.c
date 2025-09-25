/* dia_semana.c */
#include <stdio.h>

int main(void) {
    int dia;
    printf("Digite um numero (1-7) para o dia da semana: ");
    if (scanf("%d", &dia) != 1) return 0;

    switch (dia) {
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda-feira\n"); break;
        case 3: printf("Terca-feira\n"); break;
        case 4: printf("Quarta-feira\n"); break;
        case 5: printf("Quinta-feira\n"); break;
        case 6: printf("Sexta-feira\n"); break;
        case 7: printf("Sabado\n"); break;
        default: printf("Dia invalido\n"); break;
    }
    return 0;
}
