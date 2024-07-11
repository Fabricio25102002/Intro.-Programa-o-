#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, media;

    cout << "Digite a 1 nota: ";
    cin >> nota1;

    cout << "Digite a 2 nota: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2.0;

    cout << "A media das notas " << nota1 << " e " << nota2 << " e: " << media << endl;

    return 0;
}

