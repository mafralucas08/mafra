#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char escala;
    double temp, convertido;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    if (escala == 'F' || escala == 'f') {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> temp;
        convertido = (5.0/9.0) * (temp - 32.0);
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Celsius: " << convertido << endl;
    } else {
        cout << "Digite a temperatura em Celsius: ";
        cin >> temp;
        convertido = temp * 9.0/5.0 + 32.0;
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Fahrenheit: " << convertido << endl;
    }
    return 0;
}







