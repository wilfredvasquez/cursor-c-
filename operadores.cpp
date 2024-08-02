#include<iostream>
using namespace std;

int main(){
    // Aritméticos
    int a = 5, b = 10;

    int suma = a + b; // suma = 15
    int resta = a - b; // resta = 5
    int multiplicacion = a * b; // multiplicacion = 50
    int division = b / a; // division = 2 (parte entera)
    int modulo = b % a; // modulo = 0 (residuo de la división)

    // Relacionales
    int x = 10, y = 5;
    bool igual = (x == y); // igual es false o cero
    bool diferente = (x != y); // diferente es true o uno
    bool mayor = (x > y); // mayor es true o uno
    bool menor = (x < y); // menor es false o cero
    bool mayorIgual = (x >= y); // mayorIgual es true o uno
    bool menorIgual = (x <= y); // menorIgual es false o cero

    // Asignación
    int c = 10;
    c += 5; // x ahora vale 15 (equivalente a c = c + 5)
    c -= 3; // x ahora vale 12 (equivalente a c = c - 3)
    c *= 2; // x ahora vale 24 (equivalente a c = c * 2)
    c /= 4; // x ahora vale 6 (equivalente a c = c / 4)

    // Incremento y decremento
    int i = 5;
    i++; // i ahora es 6 (incremento)
    i--; // i ahora es nuevamente 5 (decremento)

    // Logicos
    bool n = true, m = false;
    bool and_logico = n && m; // and_logico es false
    bool or_logico = n || m; // or_logico es true
    bool not_logico = !n; // not_logico es false

    return 0;
}
