#include <stdio.h>

int main() {
    double raio, area;
    const double PI = 3.14159;

    printf("Digite o valor do raio do círculo: ");
    if (scanf("%lf", &raio) != 1) return 0;

    area = PI * raio * raio;   // evita pow()

    printf("A área do círculo é: %.3lf\n", area);
    return 0;
}