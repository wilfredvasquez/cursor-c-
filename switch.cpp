#include<iostream>
using namespace std;

int main() {
    float num1, num2;
    char opcion;

    cout << "Este programa permite realizar las operaciones básicas entre dos números" << endl;
    cout << "Por favor indique el símbolo de la operación que quiere hacer (+, -, *, /): ";
    cin >> opcion;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    switch (opcion) {
        case '+':
            cout << "La suma es " << num1 + num2;
            break;
        case '-':
            cout << "La resta es " << num1 - num2;
            break;
        case '*':
            cout << "La multiplicación es " << num1 * num2;
            break;
        case '/':
            cout << "La división es " << num1 / num2;
            break;
        default:
            cout << "Opción inválida";
    }

    return 0;
}
