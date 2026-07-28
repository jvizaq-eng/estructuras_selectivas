#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "=== DETERMINAR DIA DE LA SEMANA ===" << endl;
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> dia;

    // Evalua el valor exacto introducido mediante un switch
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

    // Clasifica si es dia util o fin de semana usando if-else
    if (dia >= 1 && dia <= 5) {
        cout << "Tipo: Dia laborable" << endl;
    } else if (dia == 6 || dia == 7) {
        cout << "Tipo: Fin de semana" << endl;
    }

    return 0;
}