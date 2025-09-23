#include <stdio.h>

int main() {
    int duracaoSegundos;
    int horas, minutos, segundos;

    printf("Digite a duração em segundos: ");
    scanf("%d", &duracaoSegundos);

    horas = duracaoSegundos / 3600;               // 1 hora = 3600 segundos
    minutos = (duracaoSegundos % 3600) / 60;      // resto convertido para minutos
    segundos = duracaoSegundos % 60;              // resto final são os segundos

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}