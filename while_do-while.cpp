#include<iostream>
#include<math.h>
using namespace std;

int main() {

    const float PI = 3.1416;
    float radio, area;
    char respuesta = 's';

    /*while (respuesta == 's' || respuesta == 'S') {
        cout << "Ingrese el radio del círculo: ";
        cin >> radio;

        area = PI * pow(radio, 2);
        cout << "El área del círculo es: " << area << endl << endl;

        cout << "Desea volver a realizar otro cálculo? s/n";
        cin >> respuesta;
    }*/

    do {
        cout << "Ingrese el radio del círculo: ";
        cin >> radio;

        area = PI * pow(radio, 2);
        cout << "El área del círculo es: " << area << endl << endl;

        cout << "Desea volver a realizar otro cálculo? s/n";
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');



    return 0;
}
