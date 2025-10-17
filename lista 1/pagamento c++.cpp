#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string nome;
    double valor_hora;
    double horas;
    getline(cin, nome); // lê nome (pode ter espaços)
    cin >> valor_hora >> horas;
    double pagamento = valor_hora * horas;
    cout << "FUNCIONARIO: " << nome << endl;
    cout << fixed << setprecision(2);
    cout << "SALARIO = " << pagamento << endl;
    return 0;
}
