#include<iostream>
#include<string>
using namespace std;

int suma(int num1, int num2) {
    int resultado = num1 + num2;

    return resultado;
}

int resta(int num1, int num2) {
    int resultado = num1 - num2;

    return resultado;
}

void mostrar_mensaje(string msj) {
    cout << "************************" << endl;
    cout << msj << endl;
    cout << "************************" << endl;
}

int main() {
    int res;
    int n1 = 10, n2 = 5;
    string mensaje;

    res = suma(n1, n2);
    mensaje = "La suma de los números es: " + to_string(res);
    mostrar_mensaje(mensaje);
    /*
    cout << "*************************" << endl;
    cout << mensaje << endl;
    cout << "*************************" << endl;
    */

    res = resta(n1, n2);
    mensaje = "La resta de los números es: " + to_string(res);
    mostrar_mensaje(mensaje);
    /*
    cout << "*************************" << endl;
    cout << mensaje << endl;
    cout << "*************************" << endl;
    */

    return 0;
}
