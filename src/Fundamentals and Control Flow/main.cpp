#include <iostream>
#include "ejercicios.h"
using namespace std;

int main() {
    int opcion;
    
    do {
        cout << "\n";
        cout << "========================================" << endl;
        cout << "  MENU DE EJERCICIOS - FUNDAMENTOS C++" << endl;
        cout << "========================================" << endl;
        cout << "1.  Sumar dos numeros" << endl;
        cout << "2.  Convertir Celsius a Fahrenheit" << endl;
        cout << "3.  Determinar si un numero es par o impar" << endl;
        cout << "4.  Calcular area de un circulo" << endl;
        cout << "5.  Intercambiar valores de dos variables" << endl;
        cout << "6.  Positivo, negativo o cero" << endl;
        cout << "7.  Maximo de tres numeros" << endl;
        cout << "8.  Tabla de multiplicar" << endl;
        cout << "9.  Calcular factorial" << endl;
        cout << "10. Invertir un numero" << endl;
        cout << "11. Contar digitos de un numero" << endl;
        cout << "12. Sumar digitos de un numero" << endl;
        cout << "13. Verificar si un numero es primo" << endl;
        cout << "14. Determinar si un año es bisiesto" << endl;
        cout << "15. Sumar los primeros N numeros naturales" << endl;
        cout << "16. EJECUTAR TODOS LOS EJERCICIOS" << endl;
        cout << "0.  Salir" << endl;
        cout << "========================================" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                sumarDosNumeros();
                break;
            case 2:
                celsiusAFahrenheit();
                break;
            case 3:
                parOImpar();
                break;
            case 4:
                areaCirculo();
                break;
            case 5:
                intercambiarVariables();
                break;
            case 6:
                positivoNegativoCero();
                break;
            case 7:
                maximoDeTresNumeros();
                break;
            case 8:
                tablaMultiplicar();
                break;
            case 9:
                calcularFactorial();
                break;
            case 10:
                invertirNumero();
                break;
            case 11:
                contarDigitos();
                break;
            case 12:
                sumarDigitos();
                break;
            case 13:
                verificarPrimo();
                break;
            case 14:
                esBisiesto();
                break;
            case 15:
                sumarNaturales();
                break;
            case 16:
                cout << "\n*** EJECUTANDO TODOS LOS EJERCICIOS ***\n" << endl;
                sumarDosNumeros();
                celsiusAFahrenheit();
                parOImpar();
                areaCirculo();
                intercambiarVariables();
                positivoNegativoCero();
                maximoDeTresNumeros();
                tablaMultiplicar();
                calcularFactorial();
                invertirNumero();
                contarDigitos();
                sumarDigitos();
                verificarPrimo();
                esBisiesto();
                sumarNaturales();
                cout << "\n*** TODOS LOS EJERCICIOS COMPLETADOS ***\n" << endl;
                break;
            case 0:
                cout << "\n Gracias por usar el programa! Hasta luego." << endl;
                break;
            default:
                cout << "\nOpcion invalida. Por favor intente de nuevo." << endl;
        }
        
        if (opcion != 0) {
            cout << "\nPresione Enter para continuar...";
            cin.ignore();
            cin.get();
        }
        
    } while (opcion != 0);
    
    return 0;
}
