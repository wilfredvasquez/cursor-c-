#include<iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 0 && edad <= 11) {
        cout << "Eres niño";
    } else if (edad > 11 && edad <= 21) {
        cout << "Eres un adolescente";
    } else if (edad > 21 && edad <= 65) {
        cout << "Eres adulto";
    } else if (edad > 65) {
        cout << "Eres adulto mayor";
    } else {
        cout << "Edad inválida";
    }
    return 0;
}
