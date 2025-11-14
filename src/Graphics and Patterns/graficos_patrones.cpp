#include <iostream>
#include "graficos_patrones.h"
using namespace std;


void piramideAsteriscos() {
    cout << "\n=== EJERCICIO 1: PIRAMIDE DE ASTERISCOS ===" << endl;
    int altura;
    
    cout << "Ingrese la altura de la piramide: ";
    cin >> altura;
    
    if (altura <= 0 || altura > 50) {
        cout << "Altura invalida (1-50)" << endl;
        return;
    }
    
    cout << "\nPiramide de altura " << altura << ":" << endl;
    
    for (int i = 1; i <= altura; i++) {
        
        for (int j = 1; j <= altura - i; j++) {
            cout << " ";
        }
        
        
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
}


void patronesAlineados() {
    cout << "\n=== EJERCICIO 2: PATRONES ALINEADOS ===" << endl;
    int n;
    
    cout << "Ingrese el tamaño: ";
    cin >> n;
    
    if (n <= 0 || n > 20) {
        cout << "Tamaño invalido (1-20)" << endl;
        return;
    }
    
    
    cout << "\n1. Triangulo rectangulo (izquierda):" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    
    cout << "\n2. Triangulo rectangulo (derecha):" << endl;
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    
    cout << "\n3. Triangulo invertido:" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    
    cout << "\n4. Piramide invertida:" << endl;
    for (int i = n; i >= 1; i--) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    
    cout << "\n5. Cuadrado lleno:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}


void rectanguloHueco() {
    cout << "\n=== EJERCICIO 3: RECTANGULO HUECO ===" << endl;
    int N, M;
    
    cout << "Ingrese la altura (N): ";
    cin >> N;
    cout << "Ingrese el ancho (M): ";
    cin >> M;
    
    if (N <= 0 || M <= 0 || N > 30 || M > 50) {
        cout << "Dimensiones invalidas (N: 1-30, M: 1-50)" << endl;
        return;
    }
    
    cout << "\nRectangulo hueco de " << N << " x " << M << ":" << endl;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            
            if (i == 1 || i == N || j == 1 || j == M) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}


void tableroAjedrez() {
    cout << "\n=== EJERCICIO 4: TABLERO DE AJEDREZ ===" << endl;
    int n;
    
    cout << "Ingrese el tamaño del tablero (NxN): ";
    cin >> n;
    
    if (n <= 0 || n > 20) {
        cout << "Tamaño invalido (1-20)" << endl;
        return;
    }
    
    cout << "\nTablero de ajedrez " << n << "x" << n << ":" << endl;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            
            if ((i + j) % 2 == 0) {
                cout << "* ";
            } else {
                cout << "+ ";
            }
        }
        cout << endl;
    }
    
    
    cout << "\nTablero de ajedrez (bloques 2x2):" << endl;
    int tamanioBloque = 2;
    
    for (int i = 1; i <= n * tamanioBloque; i++) {
        for (int j = 1; j <= n * tamanioBloque; j++) {
            int filaBloque = (i - 1) / tamanioBloque;
            int colBloque = (j - 1) / tamanioBloque;
            
            if ((filaBloque + colBloque) % 2 == 0) {
                cout << "*";
            } else {
                cout << "+";
            }
        }
        cout << endl;
    }
}


void patronesFormas() {
    cout << "\n=== EJERCICIO 5: PATRONES EN FORMAS ===" << endl;
    int n;
    
    cout << "Ingrese el tamaño: ";
    cin >> n;
    
    if (n <= 0 || n > 25) {
        cout << "Tamaño invalido (1-25)" << endl;
        return;
    }
    
    
    cout << "\nPatron en forma de X:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            
            if (i == j || i + j == n + 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    
    cout << "\nPatron en forma de Z:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            
            if (i == 1 || i == n || i + j == n + 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    
    if (n % 2 == 1) {
        cout << "\nPatron diamante (bonus):" << endl;
        int mitad = (n + 1) / 2;
        
        
        for (int i = 1; i <= mitad; i++) {
            for (int j = 1; j <= mitad - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
        
        
        for (int i = mitad - 1; i >= 1; i--) {
            for (int j = 1; j <= mitad - i; j++) {
                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
}


void trianguloFloyd() {
    cout << "\n=== EJERCICIO 6: TRIANGULO DE FLOYD ===" << endl;
    int n;
    
    cout << "Ingrese el numero de filas: ";
    cin >> n;
    
    if (n <= 0 || n > 15) {
        cout << "Numero de filas invalido (1-15)" << endl;
        return;
    }
    
    cout << "\nTriangulo de Floyd con " << n << " filas:" << endl;
    
    int numero = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << numero << " ";
            numero++;
        }
        cout << endl;
    }
    
    
    cout << "\nTriangulo de Floyd invertido:" << endl;
    numero = 1;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << numero << " ";
            numero++;
        }
        cout << endl;
    }
}


long long coeficienteBinomial(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    
    long long resultado = 1;
    for (int i = 0; i < k; i++) {
        resultado = resultado * (n - i) / (i + 1);
    }
    return resultado;
}


void trianguloPascal() {
    cout << "\n=== EJERCICIO 7: TRIANGULO DE PASCAL ===" << endl;
    int n;
    
    cout << "Ingrese el numero de filas: ";
    cin >> n;
    
    if (n <= 0 || n > 15) {
        cout << "Numero de filas invalido (1-15)" << endl;
        return;
    }
    
    cout << "\nTriangulo de Pascal con " << n << " filas:" << endl;
    
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        
        
        for (int j = 0; j <= i; j++) {
            long long valor = coeficienteBinomial(i, j);
            cout << valor;
            
            
            if (valor < 10) {
                cout << "   ";
            } else if (valor < 100) {
                cout << "  ";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    

}


void patronZigzag() {
    cout << "\n=== EJERCICIO 8: PATRON ZIGZAG ===" << endl;
    int filas, columnas;
    
    cout << "Ingrese numero de filas: ";
    cin >> filas;
    cout << "Ingrese numero de columnas: ";
    cin >> columnas;
    
    if (filas <= 0 || columnas <= 0 || filas > 15 || columnas > 15) {
        cout << "Dimensiones invalidas (1-15)" << endl;
        return;
    }
    
    cout << "\nPatron zigzag de " << filas << "x" << columnas << ":" << endl;
    
    int matriz[15][15];
    int numero = 1;
    
    
    for (int j = 0; j < columnas; j++) {
        if (j % 2 == 0) {
            
            for (int i = 0; i < filas; i++) {
                matriz[i][j] = numero;
                numero++;
            }
        } else {
            
            for (int i = filas - 1; i >= 0; i--) {
                matriz[i][j] = numero;
                numero++;
            }
        }
    }
    
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] < 10) {
                cout << " " << matriz[i][j] << " ";
            } else if (matriz[i][j] < 100) {
                cout << matriz[i][j] << " ";
            } else {
                cout << matriz[i][j];
            }
        }
        cout << endl;
    }
    
    
    cout << "\nPatron zigzag diagonal:" << endl;
    
    
    numero = 1;
    
    
    for (int suma = 0; suma < filas + columnas - 1; suma++) {
        if (suma % 2 == 0) {
            
            int i = (suma < filas) ? suma : filas - 1;
            int j = suma - i;
            
            while (i >= 0 && j < columnas) {
                matriz[i][j] = numero;
                numero++;
                i--;
                j++;
            }
        } else {
            
            int j = (suma < columnas) ? suma : columnas - 1;
            int i = suma - j;
            
            while (j >= 0 && i < filas) {
                matriz[i][j] = numero;
                numero++;
                i++;
                j--;
            }
        }
    }
    
    
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] < 10) {
                cout << " " << matriz[i][j] << " ";
            } else if (matriz[i][j] < 100) {
                cout << matriz[i][j] << " ";
            } else {
                cout << matriz[i][j];
            }
        }
        cout << endl;
    }
}
