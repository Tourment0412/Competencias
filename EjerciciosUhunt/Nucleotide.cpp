#include <iostream>
#include <vector>
#include <algorithm>

struct Variable {
    int valor;
    char identificador;
};

int main() {
    // Definir las variables con sus valores
    int a = 4, b = 3, c = 3, d = 2;

    // Crear un vector de la estructura Variable para almacenar los valores y sus identificadores
    std::vector<Variable> variables = {
            {a, 'a'},
            {b, 'b'},
            {c, 'c'},
            {d, 'd'}
    };

    // Función de comparación para ordenar por los valores de las variables
    auto comparador = [](const Variable& v1, const Variable& v2) {
        if (v1.valor == v2.valor) {
            return v1.identificador < v2.identificador;
        }
        return v1.valor < v2.valor;
    };

    // Ordenar el vector de variables
    std::sort(variables.begin(), variables.end(), comparador);

    // Imprimir los identificadores ordenados
    std::cout << "Identificadores ordenados de menor a mayor valor (manteniendo el orden original):\n";
    for (const auto& var : variables) {
        std::cout << var.identificador << " ";
    }
    std::cout << std::endl;

    return 0;
}
