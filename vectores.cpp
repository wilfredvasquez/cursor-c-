#include<iostream>
using namespace std;

int main() {
    //float nota[4] = { 8.3, 6.5, 10, 4.3 };
    float nota[4];
    float acum = 0;

    /*cout << nota[0] << endl;
    cout << nota[3] << endl;

    nota[3] = 7.3;
    cout << nota[3] << endl;

    cout << "Promedio: " << (nota[0] + nota[1] + nota[2] + nota[3]) / 4;*/

    // Ingrese los valores
    for(int i = 0; i < 4; i++) {
        cout << "Ingrese nota " << i + 1 << ": ";
        cin >> nota[i];
    }

    // Mostrar los valores
    for(int i = 0; i < 4; i++) {
        cout << nota[i] << endl;
    }

    // Manipular los valores
    for(int i = 0; i < 4; i++) {
        acum += nota[i];
    }
    //cout << acum;

    cout << "Promedio de notas es: " << acum / 4;

    return 0;
}
