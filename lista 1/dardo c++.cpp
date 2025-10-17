#include <iostream>
using namespace std;

int main() {
    double a, b, c, maior;
    cout << "Digite as tres distancias: ";
    cin >> a >> b >> c;

    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    cout << "MAIOR DISTANCIA = " << maior << endl;
    return 0;
}






