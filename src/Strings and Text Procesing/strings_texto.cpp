#include <iostream>
#include <string>  
#include "strings_texto.h"
using namespace std;


void verificarPalindromo() {
    cout << "\n=== EJERCICIO 1: VERIFICAR PALINDROMO ===" << endl;
    char palabra[100];
    
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    

    int longitud = 0;
    while (palabra[longitud] != '\0') {
        longitud++;
    }
    

    bool esPalindromo = true;
    for (int i = 0; i < longitud / 2; i++) {

        char izq = palabra[i];
        char der = palabra[longitud - 1 - i];
        

        if (izq >= 'A' && izq <= 'Z') {
            izq = izq + 32; 
        }
        if (der >= 'A' && der <= 'Z') {
            der = der + 32;
        }
        
        if (izq != der) {
            esPalindromo = false;
            break;
        }
    }
    
    if (esPalindromo) {
        cout << "\"" << palabra << "\" ES un palindromo" << endl;
    } else {
        cout << "\"" << palabra << "\" NO es un palindromo" << endl;
    }
}


void verificarAnagramas() {
    cout << "\n=== EJERCICIO 2: VERIFICAR ANAGRAMAS ===" << endl;
    char palabra1[100], palabra2[100];
    
    cout << "Ingrese la primera palabra: ";
    cin >> palabra1;
    cout << "Ingrese la segunda palabra: ";
    cin >> palabra2;
    

    int frecuencia1[26] = {0};
    int frecuencia2[26] = {0};
    

    int i = 0;
    while (palabra1[i] != '\0') {
        char c = palabra1[i];
        

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        

        if (c >= 'a' && c <= 'z') {
            int indice = c - 'a'; 
            frecuencia1[indice]++;
        }
        i++;
    }
    
 
    i = 0;
    while (palabra2[i] != '\0') {
        char c = palabra2[i];
        
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        
        if (c >= 'a' && c <= 'z') {
            int indice = c - 'a';
            frecuencia2[indice]++;
        }
        i++;
    }
    
 
    bool sonAnagramas = true;
    for (int j = 0; j < 26; j++) {
        if (frecuencia1[j] != frecuencia2[j]) {
            sonAnagramas = false;
            break;
        }
    }
    
    if (sonAnagramas) {
        cout << "\"" << palabra1 << "\" y \"" << palabra2 << "\" SON anagramas" << endl;
    } else {
        cout << "\"" << palabra1 << "\" y \"" << palabra2 << "\" NO son anagramas" << endl;
    }
}


void frecuenciaLetras() {
    cout << "\n=== EJERCICIO 3: FRECUENCIA DE LETRAS ===" << endl;
    char texto[200];
    
    cout << "Ingrese un texto (sin espacios): ";
    cin >> texto;
    
   
    int frecuencia[26] = {0};
    
    
    int i = 0;
    while (texto[i] != '\0') {
        char c = texto[i];
        
        
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        
        
        if (c >= 'a' && c <= 'z') {
            int indice = c - 'a';
            frecuencia[indice]++;
        }
        i++;
    }
    
    
    cout << "\nFrecuencia de cada letra:" << endl;
    for (int j = 0; j < 26; j++) {
        if (frecuencia[j] > 0) {
            char letra = 'a' + j;
            cout << letra << ": " << frecuencia[j] << endl;
        }
    }
}


void cifradoCesar() {
    cout << "\n=== EJERCICIO 4: CIFRADO CESAR ===" << endl;
    char texto[200];
    int desplazamiento;
    
    cout << "Ingrese el texto a cifrar: ";
    cin.ignore(); 
    cin.getline(texto, 200);
    
    cout << "Ingrese el desplazamiento (numero positivo): ";
    cin >> desplazamiento;
    
 
    desplazamiento = desplazamiento % 26;
    
    cout << "\nTexto original: " << texto << endl;
    cout << "Texto cifrado:  ";
    

    int i = 0;
    while (texto[i] != '\0') {
        char c = texto[i];
        
        
        if (c >= 'A' && c <= 'Z') {
            int posicion = c - 'A'; // 0-25
            int nuevaPosicion = (posicion + desplazamiento) % 26;
            char nuevaLetra = 'A' + nuevaPosicion;
            cout << nuevaLetra;
        }
        
        else if (c >= 'a' && c <= 'z') {
            int posicion = c - 'a'; 
            int nuevaPosicion = (posicion + desplazamiento) % 26;
            char nuevaLetra = 'a' + nuevaPosicion;
            cout << nuevaLetra;
        }
        
        else {
            cout << c;
        }
        i++;
    }
    cout << endl;
}


void verificarPangrama() {
    cout << "\n=== EJERCICIO 5: VERIFICAR PANGRAMA ===" << endl;
    char texto[200];
    
    cout << "Ingrese un texto: ";
    cin.ignore();
    cin.getline(texto, 200);
    

    bool letrasPresentes[26] = {false};
    

    int i = 0;
    while (texto[i] != '\0') {
        char c = texto[i];
        
        
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        

        if (c >= 'a' && c <= 'z') {
            int indice = c - 'a';
            letrasPresentes[indice] = true;
        }
        i++;
    }
    

    bool esPangrama = true;
    for (int j = 0; j < 26; j++) {
        if (!letrasPresentes[j]) {
            esPangrama = false;
            break;
        }
    }
    
    if (esPangrama) {
        cout << "El texto ES un pangrama (contiene todas las letras del alfabeto)" << endl;
    } else {
        cout << "El texto NO es un pangrama" << endl;
        
  
        cout << "Letras faltantes: ";
        for (int j = 0; j < 26; j++) {
            if (!letrasPresentes[j]) {
                char letra = 'a' + j;
                cout << letra << " ";
            }
        }
        cout << endl;
    }
}


void comprimirString() {
    cout << "\n=== EJERCICIO 6: COMPRIMIR STRING ===" << endl;
    char texto[200];
    char comprimido[200];
    
    cout << "Ingrese un texto: ";
    cin >> texto;
    
    cout << "Texto original: " << texto << endl;
    
    
    int indiceLectura = 0;
    int indiceEscritura = 0;
    
    while (texto[indiceLectura] != '\0') {
        
        comprimido[indiceEscritura] = texto[indiceLectura];
        indiceEscritura++;
        
        
        char caracterActual = texto[indiceLectura];
        while (texto[indiceLectura] == caracterActual && texto[indiceLectura] != '\0') {
            indiceLectura++;
        }
    }
    
    
    comprimido[indiceEscritura] = '\0';
    
    cout << "Texto comprimido: " << comprimido << endl;
    
    
    int longitudOriginal = 0;
    while (texto[longitudOriginal] != '\0') {
        longitudOriginal++;
    }
    
    int longitudComprimida = 0;
    while (comprimido[longitudComprimida] != '\0') {
        longitudComprimida++;
    }
    
    cout << "Reduccion: " << longitudOriginal << " -> " << longitudComprimida << " caracteres" << endl;
}


void contarCaracteresConPunteros() {
    cout << "\n=== EJERCICIO 7: CONTAR CARACTERES CON PUNTEROS ===" << endl;
    char texto[200];
    
    cout << "Ingrese un texto: ";
    cin.ignore();
    cin.getline(texto, 200);
    
    
    char* puntero = texto;
    int contador = 0;
    
    
    while (*puntero != '\0') {
        contador++;
        puntero++; 
    }
    
    cout << "El texto tiene " << contador << " caracteres" << endl;
    
    
 
}


void palindromoDePalabras() {
    cout << "\n=== EJERCICIO 8: PALINDROMO DE PALABRAS ===" << endl;
    char frase[200];
    
    cout << "Ingrese una frase: ";
    cin.ignore();
    cin.getline(frase, 200);
    
    
    char palabras[20][50]; 
    int numeroPalabras = 0;
    int indicePalabra = 0;
    
    int i = 0;
    while (frase[i] != '\0') {
        
        if (frase[i] == ' ' || frase[i + 1] == '\0') {
            
            if (frase[i] != ' ') {
                palabras[numeroPalabras][indicePalabra] = frase[i];
                indicePalabra++;
            }
            
            
            palabras[numeroPalabras][indicePalabra] = '\0';
            
            
            if (indicePalabra > 0) {
                numeroPalabras++;
                indicePalabra = 0;
            }
        } else {
            
            palabras[numeroPalabras][indicePalabra] = frase[i];
            indicePalabra++;
        }
        i++;
    }
    
    
    cout << "\nPalabras encontradas: ";
    for (int j = 0; j < numeroPalabras; j++) {
        cout << "\"" << palabras[j] << "\" ";
    }
    cout << endl;
    
    
    bool esPalindromo = true;
    for (int j = 0; j < numeroPalabras / 2; j++) {
        
        int palabraIzq = j;
        int palabraDer = numeroPalabras - 1 - j;
        
        
        int k = 0;
        while (palabras[palabraIzq][k] != '\0' || palabras[palabraDer][k] != '\0') {
            char izq = palabras[palabraIzq][k];
            char der = palabras[palabraDer][k];
            
            
            if (izq >= 'A' && izq <= 'Z') izq = izq + 32;
            if (der >= 'A' && der <= 'Z') der = der + 32;
            
            if (izq != der) {
                esPalindromo = false;
                break;
            }
            k++;
        }
        
        if (!esPalindromo) break;
    }
    
    if (esPalindromo) {
        cout << "\nLa frase ES un palindromo de palabras" << endl;
    } else {
        cout << "\nLa frase NO es un palindromo de palabras" << endl;
    }
}
