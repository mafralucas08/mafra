#include <stdio.h>

int main() {
    double distancia, combustivel, consumoMedio;

    printf("Digite a distância total percorrida (km): ");
    scanf("%lf", &distancia);

    printf("Digite o total de combustível gasto (litros): ");
    scanf("%lf", &combustivel);

    consumoMedio = distancia / combustivel;

    printf("Consumo médio do carro: %.3lf km/l\n", consumoMedio);

    return 0;
}