#include <iostream>
#include "listas_arreglos.h"
using namespace std;


void minimoMaximoLista() {
    cout << "\n=== EJERCICIO 1: MINIMO Y MAXIMO EN UNA LISTA ===" << endl;
    int n;
    
    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Debe ingresar al menos un numero" << endl;
        return;
    }
    
    int lista[100]; 
    
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> lista[i];
    }
    
   
    int minimo = lista[0];
    int maximo = lista[0];
    
    
    for (int i = 1; i < n; i++) {
        if (lista[i] < minimo) {
            minimo = lista[i];
        }
        if (lista[i] > maximo) {
            maximo = lista[i];
        }
    }
    
    cout << "Minimo: " << minimo << endl;
    cout << "Maximo: " << maximo << endl;
}


void promedioLista() {
    cout << "\n=== EJERCICIO 2: PROMEDIO DE UNA LISTA ===" << endl;
    int n;
    
    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Debe ingresar al menos un numero" << endl;
        return;
    }
    
    double lista[100];
    double suma = 0;
    
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> lista[i];
        suma += lista[i]; 
    }
    
    double promedio = suma / n;
    
    cout << "La suma total es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
}


void contarParesImpares() {
    cout << "\n=== EJERCICIO 3: CONTAR PARES E IMPARES ===" << endl;
    int n;
    
    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Debe ingresar al menos un numero" << endl;
        return;
    }
    
    int lista[100];
    int pares = 0;
    int impares = 0;
    
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> lista[i];
        

        if (lista[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    
    cout << "Cantidad de numeros pares: " << pares << endl;
    cout << "Cantidad de numeros impares: " << impares << endl;
}


void ordenarLista() {
    cout << "\n=== EJERCICIO 4: ORDENAR LISTA ASCENDENTE ===" << endl;
    int n;
    
    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Debe ingresar al menos un numero" << endl;
        return;
    }
    
    int lista[100];
    
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> lista[i];
    }
    
    cout << "Lista original: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
    
 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                
                int temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }
    
    cout << "Lista ordenada: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
}


void rotarListaDerecha() {
    cout << "\n=== EJERCICIO 5: ROTAR LISTA A LA DERECHA ===" << endl;
    int n;
    
    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Debe ingresar al menos un numero" << endl;
        return;
    }
    
    int lista[100];
    
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> lista[i];
    }
    
    cout << "Lista original: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
    
    
    int ultimo = lista[n - 1];
    
    
    for (int i = n - 1; i > 0; i--) {
        lista[i] = lista[i - 1];
    }
    
    
    lista[0] = ultimo;
    
    cout << "Lista rotada: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
}


void concatenarListas() {
    cout << "\n=== EJERCICIO 6: CONCATENAR DOS LISTAS ===" << endl;
    int n1, n2;
    
    cout << "¿Cuantos numeros tiene la primera lista?: ";
    cin >> n1;
    
    if (n1 <= 0) {
        cout << "Debe ingresar al menos un numero" << endl;
        return;
    }
    
    int lista1[100];
    
    cout << "Ingrese los " << n1 << " numeros de la primera lista:" << endl;
    for (int i = 0; i < n1; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> lista1[i];
    }
    
    cout << "¿Cuantos numeros tiene la segunda lista?: ";
    cin >> n2;
    
    if (n2 <= 0) {
        cout << "Debe ingresar al menos un numero" << endl;
        return;
    }
    
    int lista2[100];
    
    cout << "Ingrese los " << n2 << " numeros de la segunda lista:" << endl;
    for (int i = 0; i < n2; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> lista2[i];
    }
    

    int listaConcatenada[200];
    int indice = 0;
    
    for (int i = 0; i < n1; i++) {
        listaConcatenada[indice] = lista1[i];
        indice++;
    }
    

    for (int i = 0; i < n2; i++) {
        listaConcatenada[indice] = lista2[i];
        indice++;
    }
    
    cout << "Lista concatenada: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << listaConcatenada[i] << " ";
    }
    cout << endl;
}


void contarApariciones() {
    cout << "\n=== EJERCICIO 7: CONTAR APARICIONES ===" << endl;
    int n, numeroBuscado;
    
    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Debe ingresar al menos un numero" << endl;
        return;
    }
    
    int lista[100];
    
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> lista[i];
    }
    
    cout << "¿Que numero desea buscar?: ";
    cin >> numeroBuscado;
    
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (lista[i] == numeroBuscado) {
            contador++;
        }
    }
    
    cout << "El numero " << numeroBuscado << " aparece " << contador << " veces en la lista" << endl;
}


void elementoMasFrecuente() {
    cout << "\n=== EJERCICIO 8: ELEMENTO MAS FRECUENTE ===" << endl;
    int n;
    
    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Debe ingresar al menos un numero" << endl;
        return;
    }
    
    int lista[100];
    
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> lista[i];
    }
    
    int maxFrecuencia = 0;
    int elementoMasFrecuente = lista[0];
    
 
    for (int i = 0; i < n; i++) {
        int frecuenciaActual = 0;
        

        for (int j = 0; j < n; j++) {
            if (lista[j] == lista[i]) {
                frecuenciaActual++;
            }
        }
        
 
        if (frecuenciaActual > maxFrecuencia) {
            maxFrecuencia = frecuenciaActual;
            elementoMasFrecuente = lista[i];
        }
    }
    
    cout << "El elemento mas frecuente es: " << elementoMasFrecuente << endl;
    cout << "Aparece " << maxFrecuencia << " veces" << endl;
}


void segundoMasGrande() {
    cout << "\n=== EJERCICIO 9: SEGUNDO NUMERO MAS GRANDE ===" << endl;
    int n;
    
    cout << "¿Cuantos numeros desea ingresar? (minimo 2): ";
    cin >> n;
    
    if (n < 2) {
        cout << "Debe ingresar al menos dos numeros" << endl;
        return;
    }
    
    int lista[100];
    
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> lista[i];
    }
    

    int maximo = lista[0];
    for (int i = 1; i < n; i++) {
        if (lista[i] > maximo) {
            maximo = lista[i];
        }
    }
    
 
    int segundoMaximo = -2147483648; 
    bool encontrado = false;
    
    for (int i = 0; i < n; i++) {
        if (lista[i] < maximo && lista[i] > segundoMaximo) {
            segundoMaximo = lista[i];
            encontrado = true;
        }
    }
    
    if (encontrado) {
        cout << "El segundo numero mas grande es: " << segundoMaximo << endl;
    } else {
        cout << "Todos los numeros son iguales al maximo" << endl;
    }
}


void eliminarPrimero() {
    cout << "\n=== EJERCICIO 10: ELIMINAR PRIMER ELEMENTO ===" << endl;
    int n;
    
    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Debe ingresar al menos un numero" << endl;
        return;
    }
    
    int lista[100];
    
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> lista[i];
    }
    
    cout << "Lista original: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
    
    
    for (int i = 0; i < n - 1; i++) {
        lista[i] = lista[i + 1];
    }
    
    
    n = n - 1;
    
    cout << "Lista sin el primer elemento: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
}


void sumarConsecutivos() {
    cout << "\n=== EJERCICIO 11: SUMAR NUMEROS CONSECUTIVOS ===" << endl;
    int n;
    
    cout << "¿Cuantos numeros desea ingresar? (minimo 2): ";
    cin >> n;
    
    if (n < 2) {
        cout << "Debe ingresar al menos dos numeros" << endl;
        return;
    }
    
    int lista[100];
    
    cout << "Ingrese los " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> lista[i];
    }
    
    cout << "Lista original: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " ";
    }
    cout << endl;
    
    cout << "Sumas de numeros consecutivos:" << endl;
    for (int i = 0; i < n - 1; i++) {
        int suma = lista[i] + lista[i + 1];
        cout << lista[i] << " + " << lista[i + 1] << " = " << suma << endl;
    }
}


int mcdDosNumeros(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


void mcdLista() {
    cout << "\n=== EJERCICIO 12: MCD DE UNA LISTA ===" << endl;
    int n;
    
    cout << "¿Cuantos numeros desea ingresar?: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Debe ingresar al menos un numero" << endl;
        return;
    }
    
    int lista[100];
    
    cout << "Ingrese los " << n << " numeros positivos:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> lista[i];
        
        if (lista[i] <= 0) {
            cout << "Por favor ingrese solo numeros positivos" << endl;
            i--; 
        }
    }
    
 
    int mcdTotal = lista[0];
    
    for (int i = 1; i < n; i++) {
        mcdTotal = mcdDosNumeros(mcdTotal, lista[i]);
    }
    
    cout << "El MCD de todos los numeros es: " << mcdTotal << endl;
}
