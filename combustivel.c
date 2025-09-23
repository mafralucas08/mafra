#include <stdio.h>

int main() {
    double precoLitro, litros, dinheiro, total, troco;

    printf("Preço por litro do combustível: ");
    scanf("%lf", &precoLitro);

    printf("Quantidade de litros abastecidos: ");
    scanf("%lf", &litros);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    total = precoLitro * litros;
    troco = dinheiro - total;

    printf("Total a pagar: %.2lf\n", total);
    printf("Troco: %.2lf\n", troco);

    return 0;
}

