#include <iostream>
#include <string>

std::string generarSiguiente(const std::string& actual) {
    std::string siguiente;
    int contador = 1;
    for (int i = 0; i < actual.length(); ++i) {
        if (i + 1 < actual.length() && actual[i] == actual[i + 1]) {
            contador++;
        } else {
            siguiente += std::to_string(contador) + actual[i];
            contador = 1;
        }
    }
    return siguiente;
}

int main() {
    // Empezamos con el número 1
    std::string actual = "1";

    // Imprimir los primeros 10 números en la secuencia
    for (int i = 0; i < 10; ++i) {
        std::cout << actual << std::endl;
        actual = generarSiguiente(actual);
    }

    return 0;
}
