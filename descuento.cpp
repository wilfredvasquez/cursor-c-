#include<iostream>
using namespace std;

int main() {
    float precio = 100.00;
    int cant;
    float total;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "Ingrese la cantidad de productos a comprar: ";
    cin >> cant;

    if (cant > 0 && cant < 5) {
        cout << "No hay descuento. El total a pagar es: " << cant * precio;
    } else if (cant >= 5 && cant <= 10) {
        total = cant * (precio - precio * 10/100);
        cout << "Tiene un descuento del 10%. El total a pagar es: " << total;
    } else if (cant > 10) {
        total = cant * (precio - precio * 20/100);
        cout << "Tiene un descuento del 20%. El total a pagar es: " << total;
    } else {
        cout << "Cantidad inválida";
    }
    return 0;
}
