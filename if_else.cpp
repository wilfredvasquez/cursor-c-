#include<iostream>
using namespace std;

int main() {
    float nota;

    cout << "Ingrese su calificación: ";
    cin >> nota;

    if (nota == 6){
        cout << "Pasaste justo en la raya";
    } else if (nota >= 6) {
        cout << "Felicitaciones pasaste el curso";
    } else {
        cout << "Lo siento, no pasaste";
    }

    return 0;
}
