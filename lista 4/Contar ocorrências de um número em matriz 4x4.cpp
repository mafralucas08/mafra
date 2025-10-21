#include <iostream>
using namespace std;

int contarOcorrencias(int matriz[4][4], int num) {
    int contador = 0;
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            if(matriz[i][j] == num)
                contador++;
    return contador;
}

int main() {
    int matriz[4][4];
    cout << "Digite os elementos da matriz 4x4:\n";
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            cin >> matriz[i][j];

    int num;
    cout << "Digite o número para contar ocorrências: ";
    cin >> num;

    cout << "Número " << num << " aparece " << contarOcorrencias(matriz, num) << " vezes.\n";

    return 0;
}














