#include <iostream>
using namespace std;

int main() {
    int vetor[20], pares = 0, impares = 0;
    cout << "Digite 20 números inteiros:\n";
    for(int i = 0; i < 20; i++) {
        cin >> vetor[i];
        if(vetor[i] % 2 == 0) pares++;
        else impares++;
    }
    cout << "Quantidade de pares: " << pares << endl;
    cout << "Quantidade de ímpares: " << impares << endl;
    return 0;
}



