#include <iostream>
#include "ejercicios.h"
#include "listas_arreglos.h"
#include "strings_texto.h"
#include "matematicas_algoritmos.h"
#include "simulacion_juegos.h"
using namespace std;

void menuFundamentos();
void menuListasArreglos();
void menuStringsTexto();
void menuMatematicasAlgoritmos();
void menuSimulacionJuegos();

int main() {
    int opcionPrincipal;
    
    do {
        cout << "\n";
        cout << "============================================" << endl;
        cout << "    MENU PRINCIPAL - EJERCICIOS C++" << endl;
        cout << "============================================" << endl;
        cout << "1. Fundamentos y Control de Flujo (15)" << endl;
        cout << "2. Listas y Arreglos (12)" << endl;
        cout << "3. Strings y Procesamiento de Texto (8)" << endl;
        cout << "4. Matematicas y Algoritmos (17)" << endl;
        cout << "5. Simulacion y Juegos (5)" << endl;
        cout << "0. Salir" << endl;
        cout << "============================================" << endl;
        cout << "Total: 57 ejercicios" << endl;
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
            case 4:
                menuMatematicasAlgoritmos();
                break;
            case 5:
                menuSimulacionJuegos();
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
            case 1: sumarDosNumeros(); break;
            case 2: celsiusAFahrenheit(); break;
            case 3: parOImpar(); break;
            case 4: areaCirculo(); break;
            case 5: intercambiarVariables(); break;
            case 6: positivoNegativoCero(); break;
            case 7: maximoDeTresNumeros(); break;
            case 8: tablaMultiplicar(); break;
            case 9: calcularFactorial(); break;
            case 10: invertirNumero(); break;
            case 11: contarDigitos(); break;
            case 12: sumarDigitos(); break;
            case 13: verificarPrimo(); break;
            case 14: esBisiesto(); break;
            case 15: sumarNaturales(); break;
            case 16:
                cout << "\n*** EJECUTANDO TODOS LOS EJERCICIOS DE FUNDAMENTOS ***\n" << endl;
                sumarDosNumeros(); celsiusAFahrenheit(); parOImpar();
                areaCirculo(); intercambiarVariables(); positivoNegativoCero();
                maximoDeTresNumeros(); tablaMultiplicar(); calcularFactorial();
                invertirNumero(); contarDigitos(); sumarDigitos();
                verificarPrimo(); esBisiesto(); sumarNaturales();
                cout << "\n*** TODOS LOS EJERCICIOS DE FUNDAMENTOS COMPLETADOS ***\n" << endl;
                break;
            case 0: cout << "\nVolviendo al menu principal..." << endl; break;
            default: cout << "\nOpcion invalida. Por favor intente de nuevo." << endl;
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
            case 1: minimoMaximoLista(); break;
            case 2: promedioLista(); break;
            case 3: contarParesImpares(); break;
            case 4: ordenarLista(); break;
            case 5: rotarListaDerecha(); break;
            case 6: concatenarListas(); break;
            case 7: contarApariciones(); break;
            case 8: elementoMasFrecuente(); break;
            case 9: segundoMasGrande(); break;
            case 10: eliminarPrimero(); break;
            case 11: sumarConsecutivos(); break;
            case 12: mcdLista(); break;
            case 13:
                cout << "\n*** EJECUTANDO TODOS LOS EJERCICIOS DE LISTAS ***\n" << endl;
                minimoMaximoLista(); promedioLista(); contarParesImpares();
                ordenarLista(); rotarListaDerecha(); concatenarListas();
                contarApariciones(); elementoMasFrecuente(); segundoMasGrande();
                eliminarPrimero(); sumarConsecutivos(); mcdLista();
                cout << "\n*** TODOS LOS EJERCICIOS DE LISTAS COMPLETADOS ***\n" << endl;
                break;
            case 0: cout << "\nVolviendo al menu principal..." << endl; break;
            default: cout << "\nOpcion invalida. Por favor intente de nuevo." << endl;
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
            case 1: verificarPalindromo(); break;
            case 2: verificarAnagramas(); break;
            case 3: frecuenciaLetras(); break;
            case 4: cifradoCesar(); break;
            case 5: verificarPangrama(); break;
            case 6: comprimirString(); break;
            case 7: contarCaracteresConPunteros(); break;
            case 8: palindromoDePalabras(); break;
            case 9:
                cout << "\n*** EJECUTANDO TODOS LOS EJERCICIOS DE STRINGS ***\n" << endl;
                verificarPalindromo(); verificarAnagramas(); frecuenciaLetras();
                cifradoCesar(); verificarPangrama(); comprimirString();
                contarCaracteresConPunteros(); palindromoDePalabras();
                cout << "\n*** TODOS LOS EJERCICIOS DE STRINGS COMPLETADOS ***\n" << endl;
                break;
            case 0: cout << "\nVolviendo al menu principal..." << endl; break;
            default: cout << "\nOpcion invalida. Por favor intente de nuevo." << endl;
        }
        
        if (opcion != 0) {
            cout << "\nPresione Enter para continuar...";
            cin.ignore();
            cin.get();
        }
        
    } while (opcion != 0);
}

void menuMatematicasAlgoritmos() {
    int opcion;
    
    do {
        cout << "\n";
        cout << "========================================" << endl;
        cout << "    MATEMATICAS Y ALGORITMOS" << endl;
        cout << "========================================" << endl;
        cout << "1.  Decimal a binario" << endl;
        cout << "2.  Numero aleatorio (1-100)" << endl;
        cout << "3.  MCD y MCM de 2 o 3 numeros" << endl;
        cout << "4.  Area triangulo (Heron)" << endl;
        cout << "5.  Ecuacion cuadratica" << endl;
        cout << "6.  Conjetura de Collatz" << endl;
        cout << "7.  Volumen de esfera" << endl;
        cout << "8.  Estimacion de Euler (e)" << endl;
        cout << "9.  Numeros especiales 1 (perfecto/abundante/triangular)" << endl;
        cout << "10. Numeros especiales 2 (Fibonacci/Kaprekar/etc)" << endl;
        cout << "11. Aproximar Pi (Leibniz)" << endl;
        cout << "12. Metodo de Newton (raices)" << endl;
        cout << "13. Binomial y Stirling" << endl;
        cout << "14. Logaritmo (Taylor)" << endl;
        cout << "15. Secuencias (Fibonacci/Lucas/Padovan)" << endl;
        cout << "16. Secuencias aritmeticas/geometricas" << endl;
        cout << "17. Suma de cuadrados" << endl;
        cout << "18. EJECUTAR TODOS LOS EJERCICIOS" << endl;
        cout << "0.  Volver al menu principal" << endl;
        cout << "========================================" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1: decimalABinario(); break;
            case 2: generarNumeroAleatorio(); break;
            case 3: mcdMcm(); break;
            case 4: areaTrianguloHeron(); break;
            case 5: ecuacionCuadratica(); break;
            case 6: conjeturaCollatz(); break;
            case 7: volumenEsfera(); break;
            case 8: estimarEuler(); break;
            case 9: numerosEspeciales1(); break;
            case 10: numerosEspeciales2(); break;
            case 11: aproximarPiLeibniz(); break;
            case 12: metodoNewton(); break;
            case 13: binomialStirling(); break;
            case 14: logaritmoTaylor(); break;
            case 15: generarSecuencias(); break;
            case 16: secuenciasAritmeticasGeometricas(); break;
            case 17: sumaCuadrados(); break;
            case 18:
                cout << "\n*** EJECUTANDO TODOS LOS EJERCICIOS DE MATEMATICAS ***\n" << endl;
                decimalABinario(); generarNumeroAleatorio(); mcdMcm();
                areaTrianguloHeron(); ecuacionCuadratica(); conjeturaCollatz();
                volumenEsfera(); estimarEuler(); numerosEspeciales1();
                numerosEspeciales2(); aproximarPiLeibniz(); metodoNewton();
                binomialStirling(); logaritmoTaylor(); generarSecuencias();
                secuenciasAritmeticasGeometricas(); sumaCuadrados();
                cout << "\n*** TODOS LOS EJERCICIOS DE MATEMATICAS COMPLETADOS ***\n" << endl;
                break;
            case 0: cout << "\nVolviendo al menu principal..." << endl; break;
            default: cout << "\nOpcion invalida. Por favor intente de nuevo." << endl;
        }
        
        if (opcion != 0) {
            cout << "\nPresione Enter para continuar...";
            cin.ignore();
            cin.get();
        }
        
    } while (opcion != 0);
}

void menuSimulacionJuegos() {
    int opcion;
    
    do {
        cout << "\n";
        cout << "========================================" << endl;
        cout << "       SIMULACION Y JUEGOS" << endl;
        cout << "========================================" << endl;
        cout << "1. Simulador de dados" << endl;
        cout << "2. Piedra-Papel-Tijera" << endl;
        cout << "3. Juego: Adivina el numero" << endl;
        cout << "4. Generador de tripletas pitagoricas" << endl;
        cout << "5. Generador de numeros aleatorios (uniforme/normal)" << endl;
        cout << "6. EJECUTAR TODOS LOS EJERCICIOS" << endl;
        cout << "0. Volver al menu principal" << endl;
        cout << "========================================" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1: simularDados(); break;
            case 2: piedraPapelTijera(); break;
            case 3: juegoAdivinaNumero(); break;
            case 4: tripletasPitagoricas(); break;
            case 5: generadorAleatorios(); break;
            case 6:
                cout << "\n*** EJECUTANDO TODOS LOS EJERCICIOS DE SIMULACION ***\n" << endl;
                simularDados(); piedraPapelTijera(); juegoAdivinaNumero();
                tripletasPitagoricas(); generadorAleatorios();
                cout << "\n*** TODOS LOS EJERCICIOS DE SIMULACION COMPLETADOS ***\n" << endl;
                break;
            case 0: cout << "\nVolviendo al menu principal..." << endl; break;
            default: cout << "\nOpcion invalida. Por favor intente de nuevo." << endl;
        }
        
        if (opcion != 0) {
            cout << "\nPresione Enter para continuar...";
            cin.ignore();
            cin.get();
        }
        
    } while (opcion != 0);
}
