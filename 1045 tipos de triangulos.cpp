

#include <iostream>
#include <algorithm> 
#include <cmath> 
int main() {
 std::cout<<("digite os valores");
    double A, B, C;
    std::cin >> A >> B >> C;

  
    if (A < B) std::swap(A, B);
    if (A < C) std::swap(A, C);
    if (B < C) std::swap(B, C);

   
    if (A >= B + C) {
        std::cout << "NAO FORMA TRIANGULO" << std::endl;
    } else {
        if (std::pow(A, 2) == std::pow(B, 2) + std::pow(C, 2)) {
            std::cout << "TRIANGULO RETANGULO" << std::endl;
        } else if (std::pow(A, 2) > std::pow(B, 2) + std::pow(C, 2)) {
            std::cout << "TRIANGULO OBTUSANGULO" << std::endl;
        } else if (std::pow(A, 2) < std::pow(B, 2) + std::pow(C, 2)) {
            std::cout << "TRIANGULO ACUTANGULO" << std::endl;
        }

        if (A == B && B == C) {
            std::cout << "TRIANGULO EQUILATERO" << std::endl;
        } else if (A == B || A == C || B == C) {
            std::cout << "TRIANGULO ISOSCELES" << std::endl;
        }
    }

    return 0;
}





