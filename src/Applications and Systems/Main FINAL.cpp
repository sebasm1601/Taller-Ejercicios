#include <iostream>
#include "aplicaciones_sistemas.h"
using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n===== MENU PRINCIPAL - APLICACIONES DE SISTEMAS =====" << endl;
        cout << "1. Calculadora basica" << endl;
        cout << "2. Reserva de boletos" << endl;
        cout << "3. Gestion de calificaciones" << endl;
        cout << "4. Conversor de monedas" << endl;
        cout << "5. Autenticacion de usuarios" << endl;
        cout << "6. Evaluador de expresiones" << endl;
        cout << "7. Sistema de votacion" << endl;
        cout << "8. Seguimiento de puntajes" << endl;
        cout << "9. Calculadora de salud" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: calculadoraBasica(); break;
            case 2: reservaBoletos(); break;
            case 3: gestionCalificaciones(); break;
            case 4: conversorMonedas(); break;
            case 5: autenticacionUsuarios(); break;
            case 6: evaluadorExpresiones(); break;
            case 7: sistemaVotacion(); break;
            case 8: seguimientoPuntajes(); break;
            case 9: calculadoraSalud(); break;
            case 0: 
                cout << "\nSaliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }

    } while (opcion != 0);

    return 0;
}
