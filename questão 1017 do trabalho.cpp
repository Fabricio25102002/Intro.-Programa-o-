#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int tempo, velocidade_media;
    
    cin >> tempo >> velocidade_media;
    const double consumo = 12.0;

    double distancia = tempo * velocidade_media;
    double litros_necessarios = distancia / consumo;
    cout << fixed << setprecision(3) << litros_necessarios << endl;

    return 0;
}

