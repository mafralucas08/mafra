/* passagem.c */
#include <stdio.h>

int main(void) {
    int cod;
    int ida_volta; // 1 = ida e volta, 0 = so ida
    double preco = 0.0;
    printf("Codigo do destino (1-Morros,2-Barreirinhas,3-Bacabeira,4-Rosario): ");
    if (scanf("%d", &cod) != 1) return 0;
    printf("Compra de ida e volta? (1-sim, 0-nao): ");
    if (scanf("%d", &ida_volta) != 1) return 0;

    switch (cod) {
        case 1: preco = 120.0; break;
        case 2: preco = 200.0; break;
        case 3: preco = 50.0; break;
        case 4: preco = 80.0; break;
        default:
            printf("Codigo de destino invalido\n");
            return 0;
    }

    double total;
    if (ida_volta == 1) {
        total = preco * 2.0 * 0.90; // duas passagens com 10% de desconto
    } else {
        total = preco;
    }

    printf("Valor total a pagar: R$ %.2f\n", total);
    return 0;
}
