#include <iostream>

using namespace std;

int main() {
    int valor;
    cin >> valor;
    
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidadeNotas[7] = {0};
    int valorOriginal = valor;

    for (int i = 0; i < 7; i++) {
        quantidadeNotas[i] = valor / notas[i];
        valor %= notas[i];
    }
    cout << valorOriginal << endl;
    for (int i = 0; i < 7; i++) {
        cout << quantidadeNotas[i] << " nota(s) de R$ " << notas[i] << ",00" << endl;
    }

    return 0;
}

