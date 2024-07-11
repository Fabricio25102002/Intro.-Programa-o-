


#include <iostream>

int main() {
    int N;

   
    std::cout << "Digite um valor inteiro: ";
    std::cin >> N;

   
    for (int i = 1; i <= N;i++) {
       
        if (i % 2 == 0) {
           
            int quadrado = i * i;
           
            std::cout << i << "^2 = " << quadrado << std::endl;
        }
    }

    return 0;
}


