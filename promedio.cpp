#include<iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, prom;

    cout << "Ingrese nota 1: ";
    cin >> nota1;
    cout << "Ingrese nota 2: ";
    cin >> nota2;
    cout << "Ingrese nota 3: ";
    cin >> nota3;

    prom = (nota1 + nota2+ nota3) / 3;

    cout << "El promedio de notas es: " << prom;

    return 0;
}
