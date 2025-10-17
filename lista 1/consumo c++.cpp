#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distancia, combustivel;
    cin >> distancia >> combustivel;
    double consumo_medio = distancia / combustivel;
    cout << fixed << setprecision(3);
    cout << "CONSUMO = " << consumo_medio << " km/l" << endl;
    return 0;
}
