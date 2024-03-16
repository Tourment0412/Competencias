#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip> // Para setprecision

using namespace std;

double encontrarCantidadMinima(const vector<double>& gastos) {
    double total = 0.0;
    for (double gasto : gastos) {
        total += gasto;
    }

    double promedio = total / gastos.size();
    double cantidadMinima = 0.0;

    for (double gasto : gastos) {
        // Calcular la diferencia entre el promedio y el gasto actual
        double diferencia = promedio - gasto;

        // Actualizar la cantidad mínima si la diferencia es positiva
        if (diferencia > 0) {
            cantidadMinima += diferencia;
        }
    }

    return cantidadMinima;
}

int main() {
    int numEstudiantes;
    vector<double> resultados;

    while (true) {
        // Leer el número de estudiantes
        cin >> numEstudiantes;
        if (numEstudiantes == 0) {
            // Mostrar todos los resultados almacenados
            for (double resultado : resultados) {
                cout << fixed << setprecision(2) << "$" << resultado << '\n';
            }
            break; // Terminar el programa si el número de estudiantes es 0
        }

        // Leer los gastos de los estudiantes
        vector<double> gastos(numEstudiantes);
        for (int i = 0; i < numEstudiantes; ++i) {
            cin >> gastos[i];
        }

        // Calcular y almacenar el resultado para este conjunto de gastos
        double resultado = encontrarCantidadMinima(gastos);
        resultados.push_back(resultado);
    }

    return 0;
}
