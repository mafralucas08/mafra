#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long fatorial = 1;
    cout << "Digite um número inteiro: ";
    cin >> n;

    if(n < 0) {
        cout << "Fatorial não definido para números negativos.\n";
        return 0;
    }

    for(int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    cout << "Fatorial de " << n << " é " << fatorial << endl;
    return 0;
}




