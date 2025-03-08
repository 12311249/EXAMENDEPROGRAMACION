#include <iostream>

using namespace std;

int main() {
    std::cout << "A (Numeros Pares)\tB (Numero impares)\n";

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            std::cout << i << "\t\t";
        } else {
            std::cout << "\t" << i << "\n";
        }
    }

    return 0;
}