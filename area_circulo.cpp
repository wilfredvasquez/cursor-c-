#include<iostream>
#include<math.h>
using namespace std;

int main() {
    const float PI = 3.1416;
    float radio, area, area2;

    cout << "Ingrese el radio del círculo; ";
    cin >> radio;

    area = PI * radio * radio;
    area2 = PI * pow(radio, 2);

    cout << "El área del círculo es: " << area << endl;
    cout << "El área del círculo con pow es: " << area2;
    return 0;
}
