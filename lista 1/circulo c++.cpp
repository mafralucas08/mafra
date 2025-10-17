#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double r;
    cin >> r;
    const double PI = 3.14159; // ou use M_PI se disponível
    double area = PI * r * r;
    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;
    return 0;
}
