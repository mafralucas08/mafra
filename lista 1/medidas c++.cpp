#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;
    double area_quadrado = A * A;
    double area_triangulo = (A * B) / 2.0;
    double area_trapezio = ((A + B) * C) / 2.0;
    cout << fixed << setprecision(4);
    cout << "QUADRADO = " << area_quadrado << endl;
    cout << "TRIANGULO = " << area_triangulo << endl;
    cout << "TRAPEZIO = " << area_trapezio << endl;
    return 0;
}
