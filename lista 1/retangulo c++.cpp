#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double base, altura;
    cin >> base >> altura;
    double area = base * altura;
    double perimetro = 2.0 * (base + altura);
    double diagonal = sqrt(base*base + altura*altura);
    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;
    return 0;
}
