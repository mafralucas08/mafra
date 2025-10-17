#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco_unitario, valor_pago;
    int quantidade;
    cin >> preco_unitario >> quantidade >> valor_pago;
    double total = preco_unitario * quantidade;
    double troco = valor_pago - total;
    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;
    return 0;
}
