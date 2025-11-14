#include <iostream>
#include "ejercicios.h"
#include "listas_arreglos.h"
#include "strings_texto.h"
#include "matematicas_algoritmos.h"
#include "simulacion_juegos.h"
#include "graficos_patrones.h"
#include "datos_memoria.h"
using namespace std;

void menuFundamentos();
void menuListasArreglos();
void menuStringsTexto();
void menuMatematicasAlgoritmos();
void menuSimulacionJuegos();
void menuGraficosPatrones();
void menuDatosMemoria();

int main() {
    int opcionPrincipal;
    
    do {
        cout << "\n";
        cout << "===================================================" << endl;
        cout << "         MENU PRINCIPAL - EJERCICIOS C++" << endl;
        cout << "===================================================" << endl;
        cout << "1. Fundamentos y Control de Flujo (15)" << endl;
        cout << "2. Listas y Arreglos (12)" << endl;
        cout << "3. Strings y Procesamiento de Texto (8)" << endl;
        cout << "4. Matematicas y Algoritmos (17)" << endl;
        cout << "5. Simulacion y Juegos (5)" << endl;
        cout << "6. Graficos y Patrones (8)" << endl;
        cout << "7. Estructuras de Datos y Memoria (5)" << endl;
        cout << "0. Salir" << endl;
        cout << "===================================================" << endl;
        cout << "Total: 70 ejercicios - PROYECTO COMPLETO DEFINITIVO" << endl;
        cout << "===================================================" << endl;
        cout << "Seleccione una seccion: ";
        cin >> opcionPrincipal;
        
        switch(opcionPrincipal) {
            case 1: menuFundamentos(); break;
            case 2: menuListasArreglos(); break;
            case 3: menuStringsTexto(); break;
            case 4: menuMatematicasAlgoritmos(); break;
            case 5: menuSimulacionJuegos(); break;
            case 6: menuGraficosPatrones(); break;
            case 7: menuDatosMemoria(); break;
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
        cout << "\n========================================" << endl;
        cout << "  FUNDAMENTOS Y CONTROL DE FLUJO (15)" << endl;
        cout << "========================================" << endl;
        cout << "1-15. Ejercicios individuales" << endl;
        cout << "0. Volver" << endl;
        cout << "========================================" << endl;
        cout << "Seleccione: ";
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
            case 0: break;
            default: cout << "Opcion invalida" << endl;
        }
        if (opcion != 0) { cin.ignore(); cin.get(); }
    } while (opcion != 0);
}

void menuListasArreglos() {
    int opcion;
    do {
        cout << "\n========================================" << endl;
        cout << "       LISTAS Y ARREGLOS (12)" << endl;
        cout << "========================================" << endl;
        cout << "1-12. Ejercicios individuales" << endl;
        cout << "0. Volver" << endl;
        cout << "Seleccione: ";
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
            case 0: break;
            default: cout << "Opcion invalida" << endl;
        }
        if (opcion != 0) { cin.ignore(); cin.get(); }
    } while (opcion != 0);
}

void menuStringsTexto() {
    int opcion;
    do {
        cout << "\n========================================" << endl;
        cout << "  STRINGS Y PROCESAMIENTO DE TEXTO (8)" << endl;
        cout << "========================================" << endl;
        cout << "1-8. Ejercicios individuales" << endl;
        cout << "0. Volver" << endl;
        cout << "Seleccione: ";
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
            case 0: break;
            default: cout << "Opcion invalida" << endl;
        }
        if (opcion != 0) { cin.ignore(); cin.get(); }
    } while (opcion != 0);
}

void menuMatematicasAlgoritmos() {
    int opcion;
    do {
        cout << "\n========================================" << endl;
        cout << "    MATEMATICAS Y ALGORITMOS (17)" << endl;
        cout << "========================================" << endl;
        cout << "1-17. Ejercicios individuales" << endl;
        cout << "0. Volver" << endl;
        cout << "Seleccione: ";
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
            case 0: break;
            default: cout << "Opcion invalida" << endl;
        }
        if (opcion != 0) { cin.ignore(); cin.get(); }
    } while (opcion != 0);
}

void menuSimulacionJuegos() {
    int opcion;
    do {
        cout << "\n========================================" << endl;
        cout << "       SIMULACION Y JUEGOS (5)" << endl;
        cout << "========================================" << endl;
        cout << "1. Simulador de dados" << endl;
        cout << "2. Piedra-Papel-Tijera" << endl;
        cout << "3. Juego: Adivina el numero" << endl;
        cout << "4. Generador de tripletas pitagoricas" << endl;
        cout << "5. Generador aleatorio (uniforme/normal)" << endl;
        cout << "0. Volver" << endl;
        cout << "Seleccione: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1: simularDados(); break;
            case 2: piedraPapelTijera(); break;
            case 3: juegoAdivinaNumero(); break;
            case 4: tripletasPitagoricas(); break;
            case 5: generadorAleatorios(); break;
            case 0: break;
            default: cout << "Opcion invalida" << endl;
        }
        if (opcion != 0) { cin.ignore(); cin.get(); }
    } while (opcion != 0);
}

void menuGraficosPatrones() {
    int opcion;
    do {
        cout << "\n========================================" << endl;
        cout << "       GRAFICOS Y PATRONES (8)" << endl;
        cout << "========================================" << endl;
        cout << "1. Piramide de asteriscos" << endl;
        cout << "2. Patrones alineados" << endl;
        cout << "3. Rectangulo hueco" << endl;
        cout << "4. Tablero de ajedrez" << endl;
        cout << "5. Patrones en formas (X, Z)" << endl;
        cout << "6. Triangulo de Floyd" << endl;
        cout << "7. Triangulo de Pascal" << endl;
        cout << "8. Patron zigzag" << endl;
        cout << "0. Volver" << endl;
        cout << "Seleccione: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1: piramideAsteriscos(); break;
            case 2: patronesAlineados(); break;
            case 3: rectanguloHueco(); break;
            case 4: tableroAjedrez(); break;
            case 5: patronesFormas(); break;
            case 6: trianguloFloyd(); break;
            case 7: trianguloPascal(); break;
            case 8: patronZigzag(); break;
            case 0: break;
            default: cout << "Opcion invalida" << endl;
        }
        if (opcion != 0) { cin.ignore(); cin.get(); }
    } while (opcion != 0);
}

void menuDatosMemoria() {
    int opcion;
    do {
        cout << "\n========================================" << endl;
        cout << "  ESTRUCTURAS DE DATOS Y MEMORIA (5)" << endl;
        cout << "========================================" << endl;
        cout << "1. Direccion y tamanio de variables" << endl;
        cout << "2. Intercambiar con punteros" << endl;
        cout << "3. Suma de arreglo con punteros" << endl;
        cout << "4. Maximo con punteros" << endl;
        cout << "5. Asignacion dinamica (new/delete)" << endl;
        cout << "6. EJECUTAR TODOS" << endl;
        cout << "0. Volver" << endl;
        cout << "========================================" << endl;
        cout << "Seleccione: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1: mostrarDireccionTamanio(); break;
            case 2: intercambiarConPunteros(); break;
            case 3: sumaConPunteros(); break;
            case 4: maximoConPunteros(); break;
            case 5: asignacionDinamica(); break;
            case 6:
                cout << "\n*** EJECUTANDO TODOS LOS EJERCICIOS DE MEMORIA ***\n" << endl;
                mostrarDireccionTamanio(); intercambiarConPunteros();
                sumaConPunteros(); maximoConPunteros(); asignacionDinamica();
                cout << "\n*** TODOS LOS EJERCICIOS DE MEMORIA COMPLETADOS ***\n" << endl;
                break;
            case 0: break;
            default: cout << "Opcion invalida" << endl;
        }
        if (opcion != 0) { cin.ignore(); cin.get(); }
    } while (opcion != 0);
}
