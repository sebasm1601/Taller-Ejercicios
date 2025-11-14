#include <iostream>
#include <iomanip>
#include "datos_memoria.h"
using namespace std;


void mostrarDireccionTamanio() {
    cout << "\n=== EJERCICIO 1: DIRECCION Y TAMANIO DE VARIABLES ===" << endl;
    
    
    int entero = 42;
    float flotante = 3.14f;
    double doble = 2.71828;
    char caracter = 'A';
    bool booleano = true;
    long largo = 1234567890L;
    short corto = 100;
    
    cout << "\n--- Informacion de Variables ---" << endl;
    cout << fixed << setprecision(2);
    
    
    cout << "\n1. Variable int:" << endl;
    cout << "   Valor: " << entero << endl;
    cout << "   Direccion: " << &entero << endl;
    cout << "   Tamanio: " << sizeof(entero) << " bytes" << endl;
    
    
    cout << "\n2. Variable float:" << endl;
    cout << "   Valor: " << flotante << endl;
    cout << "   Direccion: " << &flotante << endl;
    cout << "   Tamanio: " << sizeof(flotante) << " bytes" << endl;
    
    
    cout << "\n3. Variable double:" << endl;
    cout << "   Valor: " << doble << endl;
    cout << "   Direccion: " << &doble << endl;
    cout << "   Tamanio: " << sizeof(doble) << " bytes" << endl;
    
    
    cout << "\n4. Variable char:" << endl;
    cout << "   Valor: " << caracter << endl;
    cout << "   Direccion: " << (void*)&caracter << endl; 
    cout << "   Tamanio: " << sizeof(caracter) << " bytes" << endl;
    
    
    cout << "\n5. Variable bool:" << endl;
    cout << "   Valor: " << (booleano ? "true" : "false") << endl;
    cout << "   Direccion: " << &booleano << endl;
    cout << "   Tamanio: " << sizeof(booleano) << " bytes" << endl;
    
    
    cout << "\n6. Variable long:" << endl;
    cout << "   Valor: " << largo << endl;
    cout << "   Direccion: " << &largo << endl;
    cout << "   Tamanio: " << sizeof(largo) << " bytes" << endl;
    
    
    cout << "\n7. Variable short:" << endl;
    cout << "   Valor: " << corto << endl;
    cout << "   Direccion: " << &corto << endl;
    cout << "   Tamanio: " << sizeof(corto) << " bytes" << endl;
    
    
    int arreglo[5] = {1, 2, 3, 4, 5};
    cout << "\n8. Arreglo de 5 enteros:" << endl;
    cout << "   Direccion base: " << arreglo << endl;
    cout << "   Tamanio total: " << sizeof(arreglo) << " bytes" << endl;
    cout << "   Tamanio por elemento: " << sizeof(arreglo[0]) << " bytes" << endl;
    
    
    cout << "\n   Direcciones de cada elemento:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "   arreglo[" << i << "] = " << arreglo[i] 
             << " en direccion " << &arreglo[i] << endl;
    }
    
    
    int* puntero = &entero;
    cout << "\n9. Puntero a int:" << endl;
    cout << "   Direccion del puntero: " << &puntero << endl;
    cout << "   Valor del puntero (direccion que guarda): " << puntero << endl;
    cout << "   Valor al que apunta: " << *puntero << endl;
    cout << "   Tamanio del puntero: " << sizeof(puntero) << " bytes" << endl;
    
    
   
}


void intercambiarConPunteros() {
    cout << "\n=== EJERCICIO 2: INTERCAMBIAR CON PUNTEROS ===" << endl;
    
    int a, b;
    
    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;
    
    cout << "\n--- Antes del intercambio ---" << endl;
    cout << "A = " << a << " (direccion: " << &a << ")" << endl;
    cout << "B = " << b << " (direccion: " << &b << ")" << endl;
    
    
    auto intercambiar = [](int* ptr1, int* ptr2) {
        cout << "\n--- Dentro de la funcion intercambiar ---" << endl;
        cout << "ptr1 apunta a: " << ptr1 << " con valor: " << *ptr1 << endl;
        cout << "ptr2 apunta a: " << ptr2 << " con valor: " << *ptr2 << endl;
        
        int temp = *ptr1;  /
        *ptr1 = *ptr2;     
        *ptr2 = temp;      
        
        cout << "Despues del intercambio dentro de la funcion:" << endl;
        cout << "*ptr1 = " << *ptr1 << endl;
        cout << "*ptr2 = " << *ptr2 << endl;
    };
    
    
    intercambiar(&a, &b);
    
    cout << "\n--- Despues del intercambio ---" << endl;
    cout << "A = " << a << " (direccion: " << &a << ")" << endl;
    cout << "B = " << b << " (direccion: " << &b << ")" << endl;
    

}


void sumaConPunteros() {
    cout << "\n=== EJERCICIO 3: SUMA CON PUNTEROS ===" << endl;
    
    int n;
    
    cout << "¿Cuantos numeros desea ingresar? (1-20): ";
    cin >> n;
    
    if (n <= 0 || n > 20) {
        cout << "Cantidad invalida" << endl;
        return;
    }
    
    int arreglo[20];
    
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> arreglo[i];
    }
    
    
    int suma1 = 0;
    for (int i = 0; i < n; i++) {
        suma1 += arreglo[i];
    }
    
    
    int suma2 = 0;
    int* ptr = arreglo;  
    
    cout << "\n--- Recorrido con puntero ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Posicion " << i << ": direccion " << ptr 
             << ", valor " << *ptr << endl;
        suma2 += *ptr;
        ptr++;  
    }
    
    
    int suma3 = 0;
    for (int i = 0; i < n; i++) {
        suma3 += *(arreglo + i);  
    }
    
    cout << "\n--- Resultados ---" << endl;
    cout << "Suma con indices tradicionales: " << suma1 << endl;
    cout << "Suma con punteros (ptr++): " << suma2 << endl;
    cout << "Suma con aritmetica de punteros: " << suma3 << endl;
    
    
}


void maximoConPunteros() {
    cout << "\n=== EJERCICIO 4: MAXIMO CON PUNTEROS ===" << endl;
    
    int n;
    
    cout << "¿Cuantos numeros desea ingresar? (1-20): ";
    cin >> n;
    
    if (n <= 0 || n > 20) {
        cout << "Cantidad invalida" << endl;
        return;
    }
    
    int arreglo[20];
    
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> arreglo[i];
    }
    
    
    int* ptr = arreglo;           
    int* ptrMax = arreglo;        
    int* final = arreglo + n;     
    
    cout << "\n--- Busqueda del maximo con punteros ---" << endl;
    cout << "Direccion inicial: " << ptr << endl;
    cout << "Direccion final: " << final << endl;
    
    int paso = 1;
    while (ptr < final) {
        cout << "Paso " << paso << ": direccion " << ptr 
             << ", valor " << *ptr;
        
        if (*ptr > *ptrMax) {
            ptrMax = ptr;
            cout << " <- NUEVO MAXIMO";
        }
        cout << endl;
        
        ptr++;
        paso++;
    }
    
    
    int posicion = ptrMax - arreglo;  
    
    cout << "\n--- Resultado ---" << endl;
    cout << "Valor maximo: " << *ptrMax << endl;
    cout << "Posicion: " << posicion << " (indice " << posicion << ")" << endl;
    cout << "Direccion: " << ptrMax << endl;
    
    
    cout << "\nTodos los elementos:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "arreglo[" << i << "] = " << arreglo[i];
        if (arreglo + i == ptrMax) {
            cout << " <-- MAXIMO";
        }
        cout << endl;
    }
    
    
   
}


void asignacionDinamica() {
    cout << "\n=== EJERCICIO 5: ASIGNACION DINAMICA ===" << endl;
    
    int n;
    
    cout << "¿Cuantos numeros desea almacenar?: ";
    cin >> n;
    
    if (n <= 0 || n > 1000) {
        cout << "Cantidad invalida (1-1000)" << endl;
        return;
    }
    
    
    cout << "\nAsignando memoria dinamica para " << n << " enteros..." << endl;
    int* arreglo = new int[n];
    
    cout << "Memoria asignada exitosamente!" << endl;
    cout << "Direccion base del arreglo: " << arreglo << endl;
    cout << "Tamanio total: " << (n * sizeof(int)) << " bytes" << endl;
    
    
    cout << "\nIngrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> arreglo[i];
    }
    
    
    cout << "\n--- Contenido del arreglo dinamico ---" << endl;
    int* ptr = arreglo;
    for (int i = 0; i < n; i++) {
        cout << "arreglo[" << i << "] = " << *ptr 
             << " (direccion: " << ptr << ")" << endl;
        ptr++;
    }
    
    
    cout << "\n--- Estadisticas ---" << endl;
    
    
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << (double)suma / n << endl;
    
    
    int* ptrMax = arreglo;
    int* ptrMin = arreglo;
    
    for (int i = 1; i < n; i++) {
        if (arreglo[i] > *ptrMax) {
            ptrMax = arreglo + i;
        }
        if (arreglo[i] < *ptrMin) {
            ptrMin = arreglo + i;
        }
    }
    
    cout << "Maximo: " << *ptrMax << " en posicion " << (ptrMax - arreglo) << endl;
    cout << "Minimo: " << *ptrMin << " en posicion " << (ptrMin - arreglo) << endl;
    
    
    cout << "\n--- Simulacion de redimensionamiento ---" << endl;
    int nuevoTamanio;
    cout << "¿A que tamanio desea redimensionar? (1-1000): ";
    cin >> nuevoTamanio;
    
    if (nuevoTamanio > 0 && nuevoTamanio <= 1000) {
        
        int* nuevoArreglo = new int[nuevoTamanio];
        
        
        int cantidadCopiar = (n < nuevoTamanio) ? n : nuevoTamanio;
        for (int i = 0; i < cantidadCopiar; i++) {
            nuevoArreglo[i] = arreglo[i];
        }
        
        
        for (int i = cantidadCopiar; i < nuevoTamanio; i++) {
            nuevoArreglo[i] = 0;
        }
        
        cout << "Redimensionamiento completado!" << endl;
        cout << "Elementos copiados: " << cantidadCopiar << endl;
        
        if (nuevoTamanio > n) {
            cout << "Elementos nuevos (inicializados en 0): " << (nuevoTamanio - n) << endl;
        }
        
        
        delete[] arreglo;
        
        
        arreglo = nuevoArreglo;
        n = nuevoTamanio;
        
        cout << "Nueva direccion base: " << arreglo << endl;
    }
    

    
    
    cout << "\nLiberando memoria..." << endl;
    delete[] arreglo;
    cout << "Memoria liberada exitosamente!" << endl;
    
    
}
