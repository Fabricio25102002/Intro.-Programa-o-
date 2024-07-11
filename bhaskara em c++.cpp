#include <iostream>
#include <cmath> // Para usar a fun��o sqrt e pow
#include <boost/math/common_factor.hpp> // Para simplificar fra��es
#include <boost/math/tools/polynomial.hpp> // Para manipular polin�mios

using namespace std;

int main() {
    double a, b, c;
    double delta, x1, x2;

    
    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;
    cout << "Digite o coeficiente c: ";
    cin >> c;

    // Calcula o delta
    delta = pow(b, 2) - 4 * a * c;

    // Verifica se a equa��o tem ra�zes reais
    if (delta >= 0) {
        // Calcula as ra�zes
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        // Exibe as ra�zes
        cout << "As raizes da equacao sao:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else {
        // Caso delta seja negativo, n�o h� ra�zes reais
        cout << "A equacao nao possui raizes reais." << endl;
    }

    return 0;
}

