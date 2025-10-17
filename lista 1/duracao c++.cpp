#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long segundos;
    cin >> segundos;
    long long horas = segundos / 3600;
    long long minutos = (segundos % 3600) / 60;
    long long segs = segundos % 60;
    // Formato H:MM:SS (minutos e segundos com 2 dígitos)
    cout << horas << ":"
         << setw(2) << setfill('0') << minutos << ":"
         << setw(2) << setfill('0') << segs << endl;
    return 0;
}
