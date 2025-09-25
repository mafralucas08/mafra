/* desconto_cantina.c */
#include <stdio.h>

int main(void) {
    double total;
    int codigo;
    printf("Valor total da compra: ");
    if (scanf("%lf", &total) != 1) return 0;
    printf("Codigo do comprador (1-visitante, 2-servidor, 3-aluno): ");
    if (scanf("%d", &codigo) != 1) return 0;

    double desconto = 0.0;
    if (codigo == 2) desconto = 0.10;   // servidor
    else if (codigo == 3) desconto = 0.05; // aluno

    double valor_final = total * (1.0 - desconto);
    printf("Valor a pagar: R$ %.2f\n", valor_final);
    return 0;
}
