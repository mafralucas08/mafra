/* recibo_emprestimo.c */
#include <stdio.h>

int main(void) {
    int codigo_livro, tipo_usuario;
    printf("Codigo do livro: ");
    if (scanf("%d", &codigo_livro) != 1) return 0;
    printf("Tipo de usuario (1-professor, 2-aluno): ");
    if (scanf("%d", &tipo_usuario) != 1) return 0;

    int dias = 0;
    char *tipo_texto = "Desconhecido";
    if (tipo_usuario == 1) { tipo_texto = "Professor"; dias = 7; }
    else if (tipo_usuario == 2) { tipo_texto = "Aluno"; dias = 3; }
    else { printf("Tipo de usuario invalido\n"); return 0; }

    printf("\n--- RECIBO DE EMPRESTIMO ---\n");
    printf("Codigo do livro: %d\n", codigo_livro);
    printf("Tipo de usuario: %s\n", tipo_texto);
    printf("Quantidade maxima de dias do emprestimo: %d dias\n", dias);
    printf("----------------------------\n");
    return 0;
}
