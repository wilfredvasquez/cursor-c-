#include<iostream>
using namespace std;

int main() {
    float num1, num2, suma;

    cout << "Ingrese el valor de num1 --> ";
    cin >> num1;

    cout << "Ingrese el valor de num2 -->";
    cin >> num2;

    suma = num1 + num2;

    cout << "La suma: " << suma << endl;
    cout << "La resta: " << num1 - num2 << endl;
    cout << "La multiplicación: " << num1 * num2 <<endl;
    cout << "La división: " << num1 / num2 << endl;

    return 0;
}
