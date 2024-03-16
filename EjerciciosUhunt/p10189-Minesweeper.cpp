#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Función para contar las minas adyacentes a una celda dada
int contarMinasAdyacentes(const vector<string>& filas, int fila, int columna) {
    int count = 0;
    int filasCount = filas.size();
    int columnasCount = filas[0].size();

    // Definir las posiciones adyacentes
    int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
    int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

    // Iterar sobre las posiciones adyacentes
    for (int i = 0; i < 8; i++) {
        int x = fila + dx[i];
        int y = columna + dy[i];

        // Verificar si la posición es válida y contiene una mina
        if (x >= 0 && x < filasCount && y >= 0 && y < columnasCount && filas[x][y] == '*') {
            count++;
        }
    }

    return count;
}

int main() {
    vector<string> salidas;

    while (true) {
        int filas, columnas;
        cin >> filas >> columnas;

        if (filas == 0 && columnas == 0) {
            // Salir del bucle si las dimensiones son 0 0
            break;
        }

        // Entrada del juego de buscaminas
        vector<string> entrada(filas);
        for (int i = 0; i < filas; i++) {
            cin >> entrada[i];
        }

        // Crear una matriz para almacenar el resultado
        vector<vector<char>> resultado(filas, vector<char>(columnas));

        // Recorrer cada celda y calcular el número de minas adyacentes
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                if (entrada[i][j] == '*') {
                    resultado[i][j] = '*'; // Si es una mina, mantenerla igual
                } else {
                    int minasAdyacentes = contarMinasAdyacentes(entrada, i, j);
                    resultado[i][j] = minasAdyacentes + '0'; // Convertir a carácter
                }
            }
        }

        // Crear la salida y agregarla al vector de salidas
        // Crear la salida y agregarla al vector de salidas
        string salida = "Field #" + to_string(salidas.size() + 1) + ":\n";
        for (int i = 0; i < filas; i++) {
            salida += string(resultado[i].begin(), resultado[i].end());
            salida += '\n';
        }
        salidas.push_back(salida);

    }

    // Mostrar todas las salidas acumuladas
    // Mostrar todas las salidas acumuladas
    for (int i = 0; i < salidas.size(); i++) {
        cout << salidas[i];
        // Agregar una línea en blanco entre las salidas, excepto para la última
        if (i != salidas.size() - 1) {
            cout << endl;
        }
    }


    return 0;
}
