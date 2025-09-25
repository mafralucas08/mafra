/* programador.c */
#include <stdio.h>

int main(void) {
    int anos;
    printf("Anos de experiencia: ");
    if (scanf("%d", &anos) != 1) return 0;

    if (anos >= 1 && anos <= 2) printf("Júnior\n");
    else if (anos >= 3 && anos <= 5) printf("Pleno A\n");
    else if (anos == 6) printf("Pleno B\n");
    else if (anos >= 7) printf("Sênior\n");
    else printf("Sem classificacao (menos de 1 ano)\n");

    return 0;
}
