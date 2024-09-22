#include<iostream>
using namespace std;

int main () {
    //             Fila      0          1            2
    //             Col    0 1 2 3    0 1 2 3     0 1  2  3

    int matriz[3][4] = { {1,3,5,7}, {5,4,1,16}, {7,9,61,13} };
    int suma_total = 0;
    int suma_fila;
    int maximo = 0, minimo = 1000;

    /*cout << matriz[1][2] << endl;
    cout << matriz[2][0] << endl;

    matriz[2][0] = 10;
    cout << matriz[2][0] << endl;*/

    for(int i = 0; i < 3; i++){
        suma_fila = 0;
        for(int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
            suma_total += matriz[i][j];
            suma_fila += matriz[i][j];

            if (matriz[i][j] > maximo){
                maximo = matriz[i][j];
            }
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
            }
        }
        cout << " -- La suma de esta fila es: " << suma_fila;
        cout << endl;
    }

    cout << "La suma total de los valores es: " << suma_total << endl;
    cout << "El valor mínimo de la matriz es: " << minimo << endl;
    cout << "El valor máximo de la matriz es: " << maximo;

    return 0;
}
