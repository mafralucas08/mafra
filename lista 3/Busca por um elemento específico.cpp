#include <iostream>
using namespace std;

int main() {
    int vetor[10], num;
    cout << "Digite 10 números:\n";
    for(int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }
    cout << "Digite o número a buscar: ";
    cin >> num;

    bool encontrado = false;
    for(int i = 0; i < 10; i++) {
        if(vetor[i] == num) {
            encontrado = true;
            break;
        }
    }

    if(encontrado) cout << "Número encontrado no vetor.\n";
    else cout << "Número não encontrado no vetor.\n";

    return 0;
}




