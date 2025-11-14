#include <iostream>
#include "ejercicios.h"
#include "listas_arreglos.h"
#include "strings_texto.h"
using namespace std;

void menuFundamentos();
void menuListasArreglos();
void menuStringsTexto();

int main() {
    int opcionPrincipal;
    
    do {
        cout << "\n";
        cout << "============================================" << endl;
        cout << "    MENU PRINCIPAL - EJERCICIOS C++" << endl;
        cout << "============================================" << endl;
        cout << "1. Fundamentos y Control de Flujo (15 ejercicios)" << endl;
        cout << "2. Listas y Arreglos (12 ejercicios)" << endl;
        cout << "3. Strings y Procesamiento de Texto (8 ejercicios)" << endl;
        cout << "0. Salir" << endl;
        cout << "============================================" << endl;
        cout << "Total: 35 ejercicios" << endl;
        cout << "============================================" << endl;
        cout << "Seleccione una seccion: ";
        cin >> opcionPrincipal;
        
        switch(opcionPrincipal) {
            case 1:
                menuFundamentos();
                break;
            case 2:
                menuListasArreglos();
                break;
            case 3:
                menuStringsTexto();
                break;
            case 0:
                cout << "\n¡Gracias por usar el programa! Hasta luego." << endl;
                break;
            default:
                cout << "\nOpcion invalida. Por favor intente de nuevo." << endl;
        }
        
    } while (opcionPrincipal != 0);
    
    return 0;
}

void menuFundamentos() {
    int opcion;
    
    do {
        cout << "\n";
        cout << "========================================" << endl;
        cout << "  FUNDAMENTOS Y CONTROL DE FLUJO" << endl;
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
        cout << "0.  Volver al menu principal" << endl;
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
                cout << "\n*** EJECUTANDO TODOS LOS EJERCICIOS DE FUNDAMENTOS ***\n" << endl;
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
                cout << "\n*** TODOS LOS EJERCICIOS DE FUNDAMENTOS COMPLETADOS ***\n" << endl;
                break;
            case 0:
                cout << "\nVolviendo al menu principal..." << endl;
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
}

void menuListasArreglos() {
    int opcion;
    
    do {
        cout << "\n";
        cout << "========================================" << endl;
        cout << "       LISTAS Y ARREGLOS" << endl;
        cout << "========================================" << endl;
        cout << "1.  Minimo y maximo en una lista" << endl;
        cout << "2.  Promedio de una lista" << endl;
        cout << "3.  Contar pares e impares" << endl;
        cout << "4.  Ordenar lista ascendente" << endl;
        cout << "5.  Rotar lista a la derecha" << endl;
        cout << "6.  Concatenar dos listas" << endl;
        cout << "7.  Contar apariciones de un numero" << endl;
        cout << "8.  Elemento mas frecuente" << endl;
        cout << "9.  Segundo numero mas grande" << endl;
        cout << "10. Eliminar primer elemento" << endl;
        cout << "11. Sumar numeros consecutivos" << endl;
        cout << "12. MCD de una lista de numeros" << endl;
        cout << "13. EJECUTAR TODOS LOS EJERCICIOS" << endl;
        cout << "0.  Volver al menu principal" << endl;
        cout << "========================================" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                minimoMaximoLista();
                break;
            case 2:
                promedioLista();
                break;
            case 3:
                contarParesImpares();
                break;
            case 4:
                ordenarLista();
                break;
            case 5:
                rotarListaDerecha();
                break;
            case 6:
                concatenarListas();
                break;
            case 7:
                contarApariciones();
                break;
            case 8:
                elementoMasFrecuente();
                break;
            case 9:
                segundoMasGrande();
                break;
            case 10:
                eliminarPrimero();
                break;
            case 11:
                sumarConsecutivos();
                break;
            case 12:
                mcdLista();
                break;
            case 13:
                cout << "\n*** EJECUTANDO TODOS LOS EJERCICIOS DE LISTAS ***\n" << endl;
                minimoMaximoLista();
                promedioLista();
                contarParesImpares();
                ordenarLista();
                rotarListaDerecha();
                concatenarListas();
                contarApariciones();
                elementoMasFrecuente();
                segundoMasGrande();
                eliminarPrimero();
                sumarConsecutivos();
                mcdLista();
                cout << "\n*** TODOS LOS EJERCICIOS DE LISTAS COMPLETADOS ***\n" << endl;
                break;
            case 0:
                cout << "\nVolviendo al menu principal..." << endl;
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
}

void menuStringsTexto() {
    int opcion;
    
    do {
        cout << "\n";
        cout << "========================================" << endl;
        cout << "  STRINGS Y PROCESAMIENTO DE TEXTO" << endl;
        cout << "========================================" << endl;
        cout << "1. Verificar si una palabra es palindromo" << endl;
        cout << "2. Verificar si dos palabras son anagramas" << endl;
        cout << "3. Contar frecuencia de letras" << endl;
        cout << "4. Cifrado Cesar" << endl;
        cout << "5. Verificar si es un pangrama" << endl;
        cout << "6. Comprimir string (eliminar repetidos)" << endl;
        cout << "7. Contar caracteres con punteros" << endl;
        cout << "8. Palindromo de palabras" << endl;
        cout << "9. EJECUTAR TODOS LOS EJERCICIOS" << endl;
        cout << "0. Volver al menu principal" << endl;
        cout << "========================================" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                verificarPalindromo();
                break;
            case 2:
                verificarAnagramas();
                break;
            case 3:
                frecuenciaLetras();
                break;
            case 4:
                cifradoCesar();
                break;
            case 5:
                verificarPangrama();
                break;
            case 6:
                comprimirString();
                break;
            case 7:
                contarCaracteresConPunteros();
                break;
            case 8:
                palindromoDePalabras();
                break;
            case 9:
                cout << "\n*** EJECUTANDO TODOS LOS EJERCICIOS DE STRINGS ***\n" << endl;
                verificarPalindromo();
                verificarAnagramas();
                frecuenciaLetras();
                cifradoCesar();
                verificarPangrama();
                comprimirString();
                contarCaracteresConPunteros();
                palindromoDePalabras();
                cout << "\n*** TODOS LOS EJERCICIOS DE STRINGS COMPLETADOS ***\n" << endl;
                break;
            case 0:
                cout << "\nVolviendo al menu principal..." << endl;
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
}
