#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "simulacion_juegos.h"
using namespace std;


void simularDados() {
    cout << "\n=== EJERCICIO 1: SIMULADOR DE DADOS ===" << endl;
    
    
    srand(time(0));
    
    int numDados, numLanzamientos;
    
    cout << "¿Cuantos dados desea lanzar?: ";
    cin >> numDados;
    
    if (numDados <= 0 || numDados > 10) {
        cout << "Numero de dados invalido (1-10)" << endl;
        return;
    }
    
    cout << "¿Cuantas veces desea lanzar?: ";
    cin >> numLanzamientos;
    
    if (numLanzamientos <= 0 || numLanzamientos > 100) {
        cout << "Numero de lanzamientos invalido (1-100)" << endl;
        return;
    }
    
    cout << "\n--- Simulacion de " << numDados << " dado(s) ---" << endl;
    
    int sumaTotal = 0;
    int frecuencias[61] = {0}; 
    
    for (int lanzamiento = 1; lanzamiento <= numLanzamientos; lanzamiento++) {
        cout << "Lanzamiento " << lanzamiento << ": ";
        
        int sumaLanzamiento = 0;
        for (int dado = 0; dado < numDados; dado++) {
            int valor = (rand() % 6) + 1; 
            cout << "[" << valor << "] ";
            sumaLanzamiento += valor;
        }
        
        cout << "= " << sumaLanzamiento << endl;
        sumaTotal += sumaLanzamiento;
        if (sumaLanzamiento < 61) {
            frecuencias[sumaLanzamiento]++;
        }
    }
    
    
    cout << "\n--- Estadisticas ---" << endl;
    cout << "Suma total: " << sumaTotal << endl;
    cout << "Promedio por lanzamiento: " << (double)sumaTotal / numLanzamientos << endl;
    
    
    cout << "\nDistribucion de sumas:" << endl;
    for (int i = numDados; i <= numDados * 6; i++) {
        if (frecuencias[i] > 0) {
            cout << "  " << i << ": ";
            for (int j = 0; j < frecuencias[i]; j++) {
                cout << "*";
            }
            cout << " (" << frecuencias[i] << ")" << endl;
        }
    }
}


void piedraPapelTijera() {
    cout << "\n=== EJERCICIO 2: PIEDRA-PAPEL-TIJERA ===" << endl;
    
    srand(time(0));
    
    cout << "\n¡Bienvenido al juego de Piedra-Papel-Tijera!" << endl;
    cout << "Jugaras contra la computadora" << endl;
    
    int victoriasJugador = 0;
    int victoriasComputadora = 0;
    int empates = 0;
    
    char continuar;
    
    do {
        cout << "\n--- Nueva ronda ---" << endl;
        cout << "Elige tu jugada:" << endl;
        cout << "1. Piedra" << endl;
        cout << "2. Papel" << endl;
        cout << "3. Tijera" << endl;
        cout << "Tu eleccion (1-3): ";
        
        int eleccionJugador;
        cin >> eleccionJugador;
        
        if (eleccionJugador < 1 || eleccionJugador > 3) {
            cout << "Eleccion invalida" << endl;
            continue;
        }
        
        
        int eleccionComputadora = (rand() % 3) + 1;
        
        
        string opciones[] = {"", "Piedra", "Papel", "Tijera"};
        
        cout << "\nTu eleccion: " << opciones[eleccionJugador] << endl;
        cout << "Computadora eligio: " << opciones[eleccionComputadora] << endl;
        
        
        if (eleccionJugador == eleccionComputadora) {
            cout << "¡EMPATE!" << endl;
            empates++;
        } else if ((eleccionJugador == 1 && eleccionComputadora == 3) ||  
                   (eleccionJugador == 2 && eleccionComputadora == 1) ||  
                   (eleccionJugador == 3 && eleccionComputadora == 2)) {  
            cout << "¡GANASTE esta ronda!" << endl;
            victoriasJugador++;
        } else {
            cout << "¡PERDISTE esta ronda!" << endl;
            victoriasComputadora++;
        }
        
        
        cout << "\n--- Marcador ---" << endl;
        cout << "Tu: " << victoriasJugador << " | Computadora: " << victoriasComputadora << " | Empates: " << empates << endl;
        
        cout << "\n¿Jugar otra ronda? (s/n): ";
        cin >> continuar;
        
    } while (continuar == 's' || continuar == 'S');
    
    
    cout << "\n=== JUEGO TERMINADO ===" << endl;
    cout << "Resultados finales:" << endl;
    cout << "Tus victorias: " << victoriasJugador << endl;
    cout << "Victorias de la computadora: " << victoriasComputadora << endl;
    cout << "Empates: " << empates << endl;
    
    int totalPartidas = victoriasJugador + victoriasComputadora + empates;
    if (totalPartidas > 0) {
        cout << "Tu porcentaje de victorias: " 
             << (victoriasJugador * 100.0 / totalPartidas) << "%" << endl;
    }
    
    if (victoriasJugador > victoriasComputadora) {
        cout << "\n¡FELICIDADES! ¡Eres el CAMPEON!" << endl;
    } else if (victoriasComputadora > victoriasJugador) {
        cout << "\nLa computadora gano esta vez. ¡Intenta de nuevo!" << endl;
    } else {
        cout << "\n¡Es un EMPATE general! ¡Muy parejo!" << endl;
    }
}


void juegoAdivinaNumero() {
    cout << "\n=== EJERCICIO 3: ADIVINA EL NUMERO ===" << endl;
    
    srand(time(0));
    
    cout << "\n¡Bienvenido al juego de Adivina el Numero!" << endl;
    cout << "He pensado un numero entre 1 y 100" << endl;
    cout << "¡Intenta adivinarlo!" << endl;
    
    char jugarDeNuevo;
    
    do {
        int numeroSecreto = (rand() % 100) + 1;
        int intentos = 0;
        int maxIntentos = 10;
        bool adivinado = false;
        
        cout << "\n--- Nueva partida ---" << endl;
        cout << "Tienes " << maxIntentos << " intentos para adivinar" << endl;
        
        while (intentos < maxIntentos && !adivinado) {
            intentos++;
            cout << "\nIntento " << intentos << "/" << maxIntentos << endl;
            cout << "Tu numero: ";
            
            int intento;
            cin >> intento;
            
            if (intento < 1 || intento > 100) {
                cout << "El numero debe estar entre 1 y 100" << endl;
                intentos--; 
                continue;
            }
            
            if (intento == numeroSecreto) {
                adivinado = true;
                cout << "\n¡¡¡CORRECTO!!!" << endl;
                cout << "¡Adivinaste el numero en " << intentos << " intentos!" << endl;
                
                
                if (intentos <= 3) {
                    cout << "¡EXCELENTE! ¡Eres un genio!" << endl;
                } else if (intentos <= 6) {
                    cout << "¡MUY BIEN! ¡Buen trabajo!" << endl;
                } else {
                    cout << "¡BIEN! ¡Lo lograste!" << endl;
                }
                
            } else if (intento < numeroSecreto) {
                cout << "Muy bajo. El numero es MAYOR que " << intento << endl;
                
                
                if (numeroSecreto - intento > 30) {
                    cout << "Pista: Estas MUY lejos (hacia abajo)" << endl;
                } else if (numeroSecreto - intento > 10) {
                    cout << "Pista: Estas lejos (hacia abajo)" << endl;
                } else {
                    cout << "Pista: ¡Estas CERCA! (un poco mas alto)" << endl;
                }
                
            } else {
                cout << "Muy alto. El numero es MENOR que " << intento << endl;
                
                
                if (intento - numeroSecreto > 30) {
                    cout << "Pista: Estas MUY lejos (hacia arriba)" << endl;
                } else if (intento - numeroSecreto > 10) {
                    cout << "Pista: Estas lejos (hacia arriba)" << endl;
                } else {
                    cout << "Pista: ¡Estas CERCA! (un poco mas bajo)" << endl;
                }
            }
        }
        
        if (!adivinado) {
            cout << "\n¡Se acabaron los intentos!" << endl;
            cout << "El numero era: " << numeroSecreto << endl;
            cout << "¡Mejor suerte la proxima vez!" << endl;
        }
        
        cout << "\n¿Jugar de nuevo? (s/n): ";
        cin >> jugarDeNuevo;
        
    } while (jugarDeNuevo == 's' || jugarDeNuevo == 'S');
    
    cout << "\n¡Gracias por jugar!" << endl;
}


void tripletasPitagoricas() {
    cout << "\n=== EJERCICIO 4: TRIPLETAS PITAGORICAS ===" << endl;
    
    int limite;
    
    cout << "Una tripleta pitagorica es (a, b, c) tal que a^2 + b^2 = c^2" << endl;
    cout << "Ejemplo: (3, 4, 5) porque 3^2 + 4^2 = 9 + 16 = 25 = 5^2" << endl;
    
    cout << "\nIngrese el limite maximo para c: ";
    cin >> limite;
    
    if (limite < 5 || limite > 1000) {
        cout << "Limite invalido (5-1000)" << endl;
        return;
    }
    
    cout << "\nBuscando tripletas pitagoricas donde c <= " << limite << endl;
    cout << "\nTripletas encontradas:" << endl;
    cout << "  (a, b, c)       Verificacion: a^2 + b^2 = c^2" << endl;
    cout << "------------------------------------------------" << endl;
    
    int contador = 0;
    
    
    for (int a = 1; a < limite; a++) {
        for (int b = a; b < limite; b++) {
            
            double c_double = sqrt(a * a + b * b);
            int c = (int)c_double;
            
            
            if (c <= limite && c_double == c && a * a + b * b == c * c) {
                contador++;
                cout << contador << ". (" << a << ", " << b << ", " << c << ")";
                cout << "\t" << a * a << " + " << b * b << " = " << c * c << endl;
                
                
                if (contador >= 20 && limite > 50) {
                    cout << "..." << endl;
                    cout << "(Mostrando solo las primeras 20)" << endl;
                    break;
                }
            }
        }
        if (contador >= 20 && limite > 50) break;
    }
    
    cout << "\nTotal de tripletas encontradas: " << contador << endl;
    
    
    
}


double generarNormal(double media, double desviacion) {
    
    double u1 = (rand() + 1.0) / (RAND_MAX + 1.0);
    double u2 = (rand() + 1.0) / (RAND_MAX + 1.0);
    
    
    double z = sqrt(-2.0 * log(u1)) * cos(2.0 * 3.14159265359 * u2);
    
    return media + desviacion * z;
}


void generadorAleatorios() {
    cout << "\n=== EJERCICIO 5: GENERADOR DE NUMEROS ALEATORIOS ===" << endl;
    
    srand(time(0));
    
    int opcion;
    
    cout << "\nTipos de distribucion:" << endl;
    cout << "1. Distribucion uniforme (todos igual de probables)" << endl;
    cout << "2. Distribucion normal/gaussiana (forma de campana)" << endl;
    cout << "Opcion: ";
    cin >> opcion;
    
    int cantidad;
    cout << "¿Cuantos numeros desea generar? (1-1000): ";
    cin >> cantidad;
    
    if (cantidad < 1 || cantidad > 1000) {
        cout << "Cantidad invalida" << endl;
        return;
    }
    
    if (opcion == 1) {
        
        int minimo, maximo;
        cout << "\nIngrese el valor minimo: ";
        cin >> minimo;
        cout << "Ingrese el valor maximo: ";
        cin >> maximo;
        
        if (minimo >= maximo) {
            cout << "El minimo debe ser menor que el maximo" << endl;
            return;
        }
        
        cout << "\n--- Distribucion Uniforme [" << minimo << ", " << maximo << "] ---" << endl;
        cout << "Numeros generados:" << endl;
        
        double suma = 0;
        int numeros[1000];
        
        for (int i = 0; i < cantidad; i++) {
            numeros[i] = minimo + (rand() % (maximo - minimo + 1));
            
            
            if (i < 100) {
                cout << numeros[i];
                if ((i + 1) % 10 == 0) {
                    cout << endl;
                } else {
                    cout << " ";
                }
            }
            
            suma += numeros[i];
        }
        
        if (cantidad > 100) {
            cout << "..." << endl;
            cout << "(Mostrando solo los primeros 100)" << endl;
        }
        
        
        cout << "\nEstadisticas:" << endl;
        cout << "Promedio: " << (suma / cantidad) << endl;
        cout << "Promedio teorico: " << ((minimo + maximo) / 2.0) << endl;
        
        
        if (maximo - minimo <= 20 && cantidad >= 50) {
            cout << "\nHistograma:" << endl;
            int frecuencias[21] = {0};
            for (int i = 0; i < cantidad; i++) {
                frecuencias[numeros[i] - minimo]++;
            }
            
            for (int i = 0; i <= maximo - minimo; i++) {
                cout << (minimo + i) << ": ";
                for (int j = 0; j < frecuencias[i]; j++) {
                    cout << "*";
                }
                cout << " (" << frecuencias[i] << ")" << endl;
            }
        }
        
    } else if (opcion == 2) {
        
        double media, desviacion;
        
        cout << "\nIngrese la media: ";
        cin >> media;
        cout << "Ingrese la desviacion estandar: ";
        cin >> desviacion;
        
        if (desviacion <= 0) {
            cout << "La desviacion debe ser positiva" << endl;
            return;
        }
        
        cout << "\n--- Distribucion Normal (media=" << media 
             << ", desv=" << desviacion << ") ---" << endl;
        cout << "Numeros generados:" << endl;
        
        double suma = 0;
        double numeros[1000];
        
        for (int i = 0; i < cantidad; i++) {
            numeros[i] = generarNormal(media, desviacion);
            
            
            if (i < 50) {
                cout << numeros[i];
                if ((i + 1) % 5 == 0) {
                    cout << endl;
                } else {
                    cout << " ";
                }
            }
            
            suma += numeros[i];
        }
        
        if (cantidad > 50) {
            cout << "..." << endl;
            cout << "(Mostrando solo los primeros 50)" << endl;
        }
        
        
        cout << "\nEstadisticas:" << endl;
        cout << "Promedio observado: " << (suma / cantidad) << endl;
        cout << "Promedio esperado: " << media << endl;
        
        
        double sumaCuadrados = 0;
        for (int i = 0; i < cantidad; i++) {
            double diff = numeros[i] - (suma / cantidad);
            sumaCuadrados += diff * diff;
        }
        double desviacionObservada = sqrt(sumaCuadrados / cantidad);
        
        cout << "Desviacion observada: " << desviacionObservada << endl;
        cout << "Desviacion esperada: " << desviacion << endl;
        
        
        if (cantidad >= 50) {
            cout << "\nDistribucion aproximada:" << endl;
            int rangos[7] = {0}; 
            
            for (int i = 0; i < cantidad; i++) {
                double z = (numeros[i] - media) / desviacion;
                if (z < -2.5) rangos[0]++;
                else if (z < -1.5) rangos[1]++;
                else if (z < -0.5) rangos[2]++;
                else if (z < 0.5) rangos[3]++;
                else if (z < 1.5) rangos[4]++;
                else if (z < 2.5) rangos[5]++;
                else rangos[6]++;
            }
            
            string etiquetas[] = {"< -2.5σ", "-2.5 a -1.5σ", "-1.5 a -0.5σ", 
                                  "-0.5 a 0.5σ", "0.5 a 1.5σ", "1.5 a 2.5σ", "> 2.5σ"};
            
            for (int i = 0; i < 7; i++) {
                cout << etiquetas[i] << ": ";
                int barras = (rangos[i] * 40) / cantidad;
                for (int j = 0; j < barras; j++) {
                    cout << "*";
                }
                cout << " (" << rangos[i] << ")" << endl;
            }
        }
        
    } else {
        cout << "Opcion invalida" << endl;
    }
}
