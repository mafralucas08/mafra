#include <stdio.h>

int main() {
    double A, B, C;
    double areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);

    printf("Digite o valor de B: ");
    scanf("%lf", &B);

    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    areaQuadrado = A * A;
    areaTriangulo = (A * B) / 2.0;
    areaTrapezio = ((A + B) * C) / 2.0;

    printf("AREA QUADRADO: %.4lf\n", areaQuadrado);
    printf("AREA TRIANGULO: %.4lf\n", areaTriangulo);
    printf("AREA TRAPEZIO: %.4lf\n", areaTrapezio);

    return 0;
}