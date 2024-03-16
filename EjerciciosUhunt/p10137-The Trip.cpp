#include <iostream>
#include <vector>
#include <cmath>

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
    vector<double> gastos = {10.00,20.00,30.00};

    double cantidadMinima = encontrarCantidadMinima(gastos);

    cout << "La cantidad mínima para igualar los gastos con margen de un centavo es: $" << cantidadMinima << endl;

    return 0;
}
