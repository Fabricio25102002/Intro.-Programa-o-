#include <iostream>

int main() {
    int x;

   // ler um numero digitado (x) entre 1 e 1000, e escrever os imparis de 1 ate (x)
    do {
        std::cout << "digite um valor entre 1 e 1000.  ";
        std::cin >> x;
    } while (x < 1 || x > 1000);

    for (int i = 1; i < x; i++) {
        if (i % 2 != 0) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
