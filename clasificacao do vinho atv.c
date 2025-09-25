/* vinho.c */
#include <stdio.h>

int main(void) {
    int codigo;
    printf("Digite o codigo do vinho: ");
    if (scanf("%d", &codigo) != 1) return 0;

    if (codigo == 1 || codigo == 2 || codigo == 3) printf("De mesa\n");
    else if (codigo == 4) printf("Tinto\n");
    else if (codigo == 5) printf("Branco seco\n");
    else if (codigo == 6 || codigo == 7) printf("Branco doce\n");
    else if (codigo == 8) printf("Rose\n");
    else if (codigo == 9) printf("Espumante\n");
    else if (codigo > 10) printf("Fortificado\n");
    else printf("Codigo invalido ou sem classificacao\n");

    return 0;
}
