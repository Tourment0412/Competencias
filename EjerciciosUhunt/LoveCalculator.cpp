#include <iostream>
#include <vector>
#include <algorithm>

bool compareStrings(std::string a, std::string b) {
    return (b + a) < (a + b);
}

std::string formarNumeroMasGrande(std::vector<std::string>& subcadenas) {
    // Ordenar las subcadenas de manera personalizada
    std::sort(subcadenas .begin(), subcadenas.end(), compareStrings);

    // Concatenar las subcadenas ordenadas para formar el número más grande
    std::string resultado;
    for (const auto& subcadena : subcadenas) {
        resultado += subcadena;
    }

    return resultado;
}

int main() {
    std::vector<std::string> subcadenas = {"1", "4", "12415"};
    std::string resultado = formarNumeroMasGrande(subcadenas);
    std::cout << resultado << std::endl;

    return 0;
}
