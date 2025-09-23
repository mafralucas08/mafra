#include <stdio.h>

int main() {
    char nome[50];
    double valorHora, pagamento;
    int horas;

    printf("Digite o nome do(a) funcionário(a): ");
    scanf("%s", nome);  // lê até o primeiro espaço; para nomes compostos use fgets()

    printf("Digite o valor que recebe por hora: ");
    scanf("%lf", &valorHora);

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horas);

    pagamento = valorHora * horas;

    printf("O pagamento para %s deve ser %.2lf euros.\n", nome, pagamento);

    return 0;
}