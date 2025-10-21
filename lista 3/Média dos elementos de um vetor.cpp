#include <iostream>
using namespace std;

int main() {
    double vetor[8], soma = 0.0;
    cout << "Digite 8 números reais:\n";
    for(int i = 0; i < 8; i++) {
        cin >> vetor[i];
        soma += vetor[i];
    }
    double media = soma / 8;
    cout << "Média aritmética: " << media << endl;
    return 0;
}


