#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "=== DETERMINAR DIA DE LA SEMANA ===" << endl;
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> dia;

    switch (dia) {
        case 1: cout << "El dia es: Lunes" << endl; break;
        case 2: cout << "El dia es: Martes" << endl; break;
        case 3: cout << "El dia es: Miercoles" << endl; break;
        case 4: cout << "El dia es: Jueves" << endl; break;
        case 5: cout << "El dia es: Viernes" << endl; break;
        case 6: cout << "El dia es: Sabado" << endl; break;
        case 7: cout << "El dia es: Domingo" << endl; break;
        default: cout << "Error: Numero fuera de rango (1-7)" << endl;
    }
    return 0;
}