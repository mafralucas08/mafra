#include <iostream>
using namespace std;

int main() {
    int v1[5], v2[5];
    int produtoEscalar = 0;

    cout << "Digite 5 elementos do primeiro vetor:\n";
    for(int i = 0; i < 5; i++) {
        cin >> v1[i];
    }

    cout << "Digite 5 elementos do segundo vetor:\n";
    for(int i = 0; i < 5; i++) {
        cin >> v2[i];
    }

    for(int i = 0; i < 5; i++) {
        produtoEscalar += v1[i] * v2[i];
    }

    cout << "Produto escalar: " << produtoEscalar << endl;
    return 0;
}






