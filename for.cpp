#include<iostream>
using namespace std;

int main() {
    int num;

    /* for (int i = 0; i <= 10; i++){
        cout << i << " ";
    } */

    /* for (int i = 0; i <= 10; i = i + 2){
        cout << i << " ";
    } */

    /* for (int i = 10; i >= 0; i--){
        cout << i << " ";
    }*/

    cout << "Ingrese un número: ";
    cin >> num;

    for (int i = 1; i <= 10; i++){
        cout << i << " x " << num << " = " << i * num << endl;
    }

    return 0;
}
