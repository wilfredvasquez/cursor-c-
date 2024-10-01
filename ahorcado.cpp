#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void mostrarProgreso(string adivinada, int intentos) {
    cout << "\nPalabra: " << adivinada << endl;
    cout << "Te queda " << intentos << " intentos" << endl;
}

int main() {
    string palabraSecreta;
    int intentos = 6;
    char letra;
    bool acierto;

    cout << "Ingrese la palabra secreta: ";
    cin >> palabraSecreta;

    // Unix / Linux
    system("clear");
    // system("cls");

    string palabraAdivinada(palabraSecreta.length(), '_');
    //cout << palabraAdivinada;

    cout << "Bienvenido al juego de El Ahorcado" << endl;
    cout << "Tienes " << intentos << " para intentar adivinar la palabra" << endl;

    while(intentos > 0 && palabraAdivinada != palabraSecreta) {
        mostrarProgreso(palabraAdivinada, intentos);

        cout << "Ingrese una letra: ";
        cin >> letra;

        acierto = false;
        for(int i = 0; i < palabraSecreta.length(); i++){
            if(palabraSecreta[i] == letra){
                palabraAdivinada[i] = letra;
                acierto = true;
            }
        }

        if(!acierto) {
            intentos--;
            cout << "Letra incorrecta" << endl;
        }
    }

    if(palabraAdivinada == palabraSecreta){
        cout << "Felicitaciones has ganado";
    } else {
        cout << "Lo siento, ha perdido. Inténtalo nuevamente";
    }

    return 0;
}
