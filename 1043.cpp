#include <iostream>
using namespace std;

int main() {
    float lado1, lado2, lado3;

    
    cout << "Digite o comprimento do primeiro lado do triangulo: ";
    cin >> lado1;

    cout << "Digite o comprimento do segundo lado do triangulo: ";
    cin >> lado2;

    cout << "Digite o comprimento do terceiro lado do triangulo: ";
    cin >> lado3;

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
     
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "O triangulo e equilatero." << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "O triangulo e isosceles." << endl;
        } else {
            cout << "O triangulo e escaleno." << endl;
        }
    } else {
        cout << "Os lados informados nao formam um triangulo." << endl;
    }

    return 0;
}

