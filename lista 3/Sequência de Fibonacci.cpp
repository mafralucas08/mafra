#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite a quantidade de elementos da sequência de Fibonacci: ";
    cin >> n;

    if(n <= 0) {
        cout << "Número inválido.\n";
        return 0;
    }

    long long fib[n];
    fib[0] = 0;
    if(n > 1) fib[1] = 1;

    for(int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    cout << "Sequência de Fibonacci:\n";
    for(int i = 0; i < n; i++) {
        cout << fib[i] << " ";
    }
    cout << endl;

    return 0;
}





