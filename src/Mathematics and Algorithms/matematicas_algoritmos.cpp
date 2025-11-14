#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "matematicas_algoritmos.h"
using namespace std;


void decimalABinario() {
    cout << "\n=== EJERCICIO 1: DECIMAL A BINARIO ===" << endl;
    int decimal;
    
    cout << "Ingrese un numero decimal: ";
    cin >> decimal;
    
    if (decimal < 0) {
        cout << "Por favor ingrese un numero positivo" << endl;
        return;
    }
    
    if (decimal == 0) {
        cout << "En binario: 0" << endl;
        return;
    }
    
    
    int binario[32]; 
    int indice = 0;
    int original = decimal;
    
    
    while (decimal > 0) {
        binario[indice] = decimal % 2;
        decimal = decimal / 2;
        indice++;
    }
    
    
    cout << "Decimal " << original << " en binario: ";
    for (int i = indice - 1; i >= 0; i--) {
        cout << binario[i];
    }
    cout << endl;
}


void generarNumeroAleatorio() {
    cout << "\n=== EJERCICIO 2: NUMERO ALEATORIO ===" << endl;
    
    
    srand(time(0));
    
    
    int aleatorio = (rand() % 100) + 1;
    
    cout << "Numero aleatorio generado: " << aleatorio << endl;
    
    
    cout << "\nGenerando 5 numeros aleatorios adicionales:" << endl;
    for (int i = 0; i < 5; i++) {
        int num = (rand() % 100) + 1;
        cout << "  " << (i + 1) << ". " << num << endl;
    }
}


int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int calcularMCM(int a, int b) {
    return (a * b) / calcularMCD(a, b);
}


void mcdMcm() {
    cout << "\n=== EJERCICIO 3: MCD Y MCM ===" << endl;
    int opcion;
    
    cout << "¿Cuantos numeros? (2 o 3): ";
    cin >> opcion;
    
    if (opcion == 2) {
        int a, b;
        cout << "Ingrese el primer numero: ";
        cin >> a;
        cout << "Ingrese el segundo numero: ";
        cin >> b;
        
        int mcd = calcularMCD(a, b);
        int mcm = calcularMCM(a, b);
        
        cout << "\nMCD(" << a << ", " << b << ") = " << mcd << endl;
        cout << "MCM(" << a << ", " << b << ") = " << mcm << endl;
        
    } else if (opcion == 3) {
        int a, b, c;
        cout << "Ingrese el primer numero: ";
        cin >> a;
        cout << "Ingrese el segundo numero: ";
        cin >> b;
        cout << "Ingrese el tercer numero: ";
        cin >> c;
        
        
        int mcd_ab = calcularMCD(a, b);
        int mcd_abc = calcularMCD(mcd_ab, c);
        
        
        int mcm_ab = calcularMCM(a, b);
        int mcm_abc = calcularMCM(mcm_ab, c);
        
        cout << "\nMCD(" << a << ", " << b << ", " << c << ") = " << mcd_abc << endl;
        cout << "MCM(" << a << ", " << b << ", " << c << ") = " << mcm_abc << endl;
        
    } else {
        cout << "Opcion invalida" << endl;
    }
}


void areaTrianguloHeron() {
    cout << "\n=== EJERCICIO 4: AREA DE TRIANGULO (HERON) ===" << endl;
    double a, b, c;
    
    cout << "Ingrese el lado a: ";
    cin >> a;
    cout << "Ingrese el lado b: ";
    cin >> b;
    cout << "Ingrese el lado c: ";
    cin >> c;
    
    
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Estos lados no forman un triangulo valido" << endl;
        return;
    }
    
    
    double s = (a + b + c) / 2.0;
    
    
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    cout << "\nSemiperimetro (s): " << s << endl;
    cout << "Area del triangulo: " << area << endl;
}


void ecuacionCuadratica() {
    cout << "\n=== EJERCICIO 5: ECUACION CUADRATICA ===" << endl;
    double a, b, c;
    
    cout << "Ecuacion: ax^2 + bx + c = 0" << endl;
    cout << "Ingrese a: ";
    cin >> a;
    
    if (a == 0) {
        cout << "No es una ecuacion cuadratica (a debe ser diferente de 0)" << endl;
        return;
    }
    
    cout << "Ingrese b: ";
    cin >> b;
    cout << "Ingrese c: ";
    cin >> c;
    
    
    double discriminante = b * b - 4 * a * c;
    
    cout << "\nEcuacion: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    cout << "Discriminante: " << discriminante << endl;
    
    if (discriminante > 0) {
        
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "\nDos soluciones reales:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        
    } else if (discriminante == 0) {
        
        double x = -b / (2 * a);
        cout << "\nUna solucion real (raiz doble):" << endl;
        cout << "x = " << x << endl;
        
    } else {
        
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        cout << "\nDos soluciones complejas:" << endl;
        cout << "x1 = " << parteReal << " + " << parteImaginaria << "i" << endl;
        cout << "x2 = " << parteReal << " - " << parteImaginaria << "i" << endl;
    }
}


void conjeturaCollatz() {
    cout << "\n=== EJERCICIO 6: CONJETURA DE COLLATZ ===" << endl;
    int n;
    
    cout << "Ingrese un numero positivo: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "El numero debe ser positivo" << endl;
        return;
    }
    
    cout << "\nSecuencia de Collatz:" << endl;
    int pasos = 0;
    int actual = n;
    
    cout << actual;
    
    while (actual != 1) {
        if (actual % 2 == 0) {
            actual = actual / 2;
        } else {
            actual = 3 * actual + 1;
        }
        cout << " -> " << actual;
        pasos++;
        
        
        if (pasos % 10 == 0) {
            cout << endl;
        }
    }
    
    cout << endl;
    cout << "\nNumero de pasos: " << pasos << endl;
}


void volumenEsfera() {
    cout << "\n=== EJERCICIO 7: VOLUMEN DE ESFERA ===" << endl;
    double radio;
    const double PI = 3.14159265359;
    
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    
    if (radio < 0) {
        cout << "El radio debe ser positivo" << endl;
        return;
    }
    
    
    double volumen = (4.0 / 3.0) * PI * radio * radio * radio;
    
    cout << "\nVolumen de la esfera: " << volumen << endl;
    
    
}


void estimarEuler() {
    cout << "\n=== EJERCICIO 8: ESTIMACION DE EULER (e) ===" << endl;
    int n;
    
    cout << "¿Cuantos terminos de la serie desea usar?: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "El numero de terminos debe ser positivo" << endl;
        return;
    }
    
    double e = 1.0;
    double factorial = 1.0;
    
    cout << "\nCalculo de e usando " << n << " terminos:" << endl;
    cout << "e = 1";
    
    for (int i = 1; i < n; i++) {
        factorial *= i;
        double termino = 1.0 / factorial;
        e += termino;
        
        
        if (i <= 5) {
            cout << " + 1/" << i << "!";
        } else if (i == 6) {
            cout << " + ...";
        }
    }
    
    cout << endl;
    cout << "\nAproximacion de e: " << e << endl;
    cout << "Valor real de e:    " << 2.71828182846 << endl;
    cout << "Error absoluto:     " << abs(e - 2.71828182846) << endl;
}


void numerosEspeciales1() {
    cout << "\n=== EJERCICIO 9: NUMEROS ESPECIALES (PARTE 1) ===" << endl;
    int n;
    
    cout << "Ingrese un numero: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "El numero debe ser positivo" << endl;
        return;
    }
    
    
    int sumaDivisores = 0;
    cout << "\nDivisores propios de " << n << ": ";
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            sumaDivisores += i;
        }
    }
    cout << endl;
    cout << "Suma de divisores propios: " << sumaDivisores << endl;
    
    if (sumaDivisores == n) {
        cout << n << " es un NUMERO PERFECTO" << endl;
    } else if (sumaDivisores > n) {
        cout << n << " es un NUMERO ABUNDANTE (suma > numero)" << endl;
    } else {
        cout << n << " es un NUMERO DEFICIENTE (suma < numero)" << endl;
    }
    
    
    double discriminante = 1 + 8 * n;
    double k = (-1 + sqrt(discriminante)) / 2;
    
    bool esTriangular = (k == (int)k && k > 0);
    
    if (esTriangular) {
        cout << n << " es un NUMERO TRIANGULAR (posicion " << (int)k << ")" << endl;
    } else {
        cout << n << " NO es un numero triangular" << endl;
    }
}


void numerosEspeciales2() {
    cout << "\n=== EJERCICIO 10: NUMEROS ESPECIALES (PARTE 2) ===" << endl;
    int n;
    
    cout << "Ingrese un numero: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "El numero debe ser positivo" << endl;
        return;
    }
    
    
    bool esFibonacci = false;
    int fib1 = 1, fib2 = 1;
    if (n == 1) {
        esFibonacci = true;
    } else {
        while (fib2 < n) {
            int temp = fib1 + fib2;
            fib1 = fib2;
            fib2 = temp;
        }
        if (fib2 == n) {
            esFibonacci = true;
        }
    }
    
    cout << "\n" << n << (esFibonacci ? " ES" : " NO es") << " un numero de Fibonacci" << endl;
    
    
    long long cuadrado = (long long)n * n;
    bool esKaprekar = false;
    
    
    string strCuadrado = to_string(cuadrado);
    int longitud = strCuadrado.length();
    
    for (int i = 1; i < longitud; i++) {
        string izq = strCuadrado.substr(0, i);
        string der = strCuadrado.substr(i);
        
        int parteIzq = (izq.empty() ? 0 : stoi(izq));
        int parteDer = (der.empty() ? 0 : stoi(der));
        
        if (parteDer > 0 && parteIzq + parteDer == n) {
            esKaprekar = true;
            cout << n << " ES un numero de Kaprekar (" << n << "^2 = " << cuadrado;
            cout << ", " << parteIzq << "+" << parteDer << "=" << n << ")" << endl;
            break;
        }
    }
    
    if (!esKaprekar) {
        cout << n << " NO es un numero de Kaprekar" << endl;
    }
    
    
    int temp = n;
    int numDigitos = 0;
    while (temp > 0) {
        numDigitos++;
        temp /= 10;
    }
    
    temp = n;
    int suma = 0;
    while (temp > 0) {
        int digito = temp % 10;
        int potencia = 1;
        for (int i = 0; i < numDigitos; i++) {
            potencia *= digito;
        }
        suma += potencia;
        temp /= 10;
    }
    
    bool esNarcisista = (suma == n);
    cout << n << (esNarcisista ? " ES" : " NO es") << " un numero Narcisista" << endl;
    
    
    bool esMersenne = false;
    int potencia = 1;
    for (int p = 1; p < 31; p++) {
        potencia *= 2;
        if (potencia - 1 == n) {
            esMersenne = true;
            cout << n << " ES un numero de Mersenne (2^" << p << " - 1)" << endl;
            break;
        }
        if (potencia - 1 > n) break;
    }
    
    if (!esMersenne) {
        cout << n << " NO es un numero de Mersenne" << endl;
    }
}


void aproximarPiLeibniz() {
    cout << "\n=== EJERCICIO 11: APROXIMAR PI (LEIBNIZ) ===" << endl;
    int n;
    
    cout << "¿Cuantos terminos desea usar?: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "El numero de terminos debe ser positivo" << endl;
        return;
    }
    
    double suma = 0.0;
    
    cout << "\nSerie de Leibniz: π/4 = 1 - 1/3 + 1/5 - 1/7 + ..." << endl;
    cout << "Calculando con " << n << " terminos..." << endl;
    
    for (int i = 0; i < n; i++) {
        double termino = 1.0 / (2 * i + 1);
        if (i % 2 == 0) {
            suma += termino;
        } else {
            suma -= termino;
        }
    }
    
    double pi_aproximado = suma * 4;
    
    cout << "\nAproximacion de π: " << pi_aproximado << endl;
    cout << "Valor real de π:   " << 3.14159265359 << endl;
    cout << "Error absoluto:    " << abs(pi_aproximado - 3.14159265359) << endl;
    cout << "\nNota: Esta serie converge lentamente. Use mas terminos para mejor precision." << endl;
}


void metodoNewton() {
    cout << "\n=== EJERCICIO 12: METODO DE NEWTON ===" << endl;
    int opcion;
    double numero;
    
    cout << "¿Que desea calcular?" << endl;
    cout << "1. Raiz cuadrada" << endl;
    cout << "2. Raiz cubica" << endl;
    cout << "Opcion: ";
    cin >> opcion;
    
    cout << "Ingrese el numero: ";
    cin >> numero;
    
    if (numero < 0 && opcion == 1) {
        cout << "No se puede calcular raiz cuadrada de numero negativo" << endl;
        return;
    }
    
    double tolerancia = 0.00001;
    int maxIteraciones = 50;
    
    if (opcion == 1) {
        
        double x = numero / 2.0; 
        
        cout << "\nCalculando raiz cuadrada de " << numero << endl;
        cout << "Iteracion\tAproximacion\tError" << endl;
        
        for (int i = 0; i < maxIteraciones; i++) {
            double x_nuevo = (x + numero / x) / 2.0;
            double error = abs(x_nuevo - x);
            
            if (i < 10) {
                cout << i + 1 << "\t\t" << x_nuevo << "\t" << error << endl;
            }
            
            if (error < tolerancia) {
                cout << "\nConvergencia alcanzada en " << (i + 1) << " iteraciones" << endl;
                cout << "Raiz cuadrada de " << numero << " = " << x_nuevo << endl;
                cout << "Verificacion: " << x_nuevo << "^2 = " << (x_nuevo * x_nuevo) << endl;
                return;
            }
            
            x = x_nuevo;
        }
        
    } else if (opcion == 2) {
        
        double x = numero / 3.0; 
        
        cout << "\nCalculando raiz cubica de " << numero << endl;
        cout << "Iteracion\tAproximacion\tError" << endl;
        
        for (int i = 0; i < maxIteraciones; i++) {
            double x_nuevo = (2 * x + numero / (x * x)) / 3.0;
            double error = abs(x_nuevo - x);
            
            if (i < 10) {
                cout << i + 1 << "\t\t" << x_nuevo << "\t" << error << endl;
            }
            
            if (error < tolerancia) {
                cout << "\nConvergencia alcanzada en " << (i + 1) << " iteraciones" << endl;
                cout << "Raiz cubica de " << numero << " = " << x_nuevo << endl;
                cout << "Verificacion: " << x_nuevo << "^3 = " << (x_nuevo * x_nuevo * x_nuevo) << endl;
                return;
            }
            
            x = x_nuevo;
        }
    }
}


double factorial(int n) {
    if (n <= 1) return 1.0;
    double resultado = 1.0;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}


void binomialStirling() {
    cout << "\n=== EJERCICIO 13: BINOMIAL Y STIRLING ===" << endl;
    int opcion;
    
    cout << "¿Que desea calcular?" << endl;
    cout << "1. Coeficiente binomial C(n,k)" << endl;
    cout << "2. Factorial con aproximacion de Stirling" << endl;
    cout << "Opcion: ";
    cin >> opcion;
    
    if (opcion == 1) {
        int n, k;
        cout << "Ingrese n: ";
        cin >> n;
        cout << "Ingrese k: ";
        cin >> k;
        
        if (k > n || n < 0 || k < 0) {
            cout << "Valores invalidos" << endl;
            return;
        }
        
        
        double coeficiente = factorial(n) / (factorial(k) * factorial(n - k));
        
        cout << "\nC(" << n << "," << k << ") = " << coeficiente << endl;
        cout << "Interpretacion: Formas de elegir " << k << " elementos de " << n << endl;
        
    } else if (opcion == 2) {
        int n;
        cout << "Ingrese n para calcular n!: ";
        cin >> n;
        
        if (n < 0) {
            cout << "n debe ser positivo" << endl;
            return;
        }
        
        
        double factorialExacto = 0;
        if (n <= 20) {
            factorialExacto = factorial(n);
        }
        
        
        const double PI = 3.14159265359;
        const double E = 2.71828182846;
        
        double stirling = sqrt(2 * PI * n) * pow(n / E, n);
        
        cout << "\nAproximacion de Stirling para " << n << "!" << endl;
        if (n <= 20) {
            cout << "Factorial exacto: " << factorialExacto << endl;
        }
        cout << "Aproximacion de Stirling: " << stirling << endl;
        
        if (n <= 20) {
            double error = abs(stirling - factorialExacto) / factorialExacto * 100;
            cout << "Error relativo: " << error << "%" << endl;
        }
    }
}


void logaritmoTaylor() {
    cout << "\n=== EJERCICIO 14: LOGARITMO CON TAYLOR ===" << endl;
    double x;
    int n;
    
    cout << "Serie de Taylor: ln(1+x) = x - x^2/2 + x^3/3 - x^4/4 + ..." << endl;
    cout << "Ingrese x (entre -1 y 1): ";
    cin >> x;
    
    if (x <= -1 || x > 1) {
        cout << "x debe estar en el rango (-1, 1]" << endl;
        return;
    }
    
    cout << "¿Cuantos terminos?: ";
    cin >> n;
    
    double suma = 0.0;
    double potencia = x;
    
    cout << "\nCalculando ln(" << (1 + x) << ") con " << n << " terminos..." << endl;
    
    for (int i = 1; i <= n; i++) {
        double termino = potencia / i;
        if (i % 2 == 1) {
            suma += termino;
        } else {
            suma -= termino;
        }
        potencia *= x;
    }
    
    double valorReal = log(1 + x);
    
    cout << "\nAproximacion: " << suma << endl;
    cout << "Valor real:   " << valorReal << endl;
    cout << "Error:        " << abs(suma - valorReal) << endl;
}


void generarSecuencias() {
    cout << "\n=== EJERCICIO 15: SECUENCIAS FAMOSAS ===" << endl;
    int n;
    
    cout << "¿Cuantos terminos desea generar?: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "El numero debe ser positivo" << endl;
        return;
    }
    
    
    cout << "\nSecuencia de Fibonacci:" << endl;
    long long fib[100];
    fib[0] = 0;
    fib[1] = 1;
    
    cout << fib[0];
    if (n > 1) cout << ", " << fib[1];
    
    for (int i = 2; i < n && i < 100; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << ", " << fib[i];
    }
    cout << endl;
    
    
    cout << "\nSecuencia de Lucas:" << endl;
    long long lucas[100];
    lucas[0] = 2;
    lucas[1] = 1;
    
    cout << lucas[0];
    if (n > 1) cout << ", " << lucas[1];
    
    for (int i = 2; i < n && i < 100; i++) {
        lucas[i] = lucas[i - 1] + lucas[i - 2];
        cout << ", " << lucas[i];
    }
    cout << endl;
    
    
    cout << "\nSecuencia de Padovan:" << endl;
    long long padovan[100];
    padovan[0] = 1;
    padovan[1] = 1;
    padovan[2] = 1;
    
    cout << padovan[0];
    if (n > 1) cout << ", " << padovan[1];
    if (n > 2) cout << ", " << padovan[2];
    
    for (int i = 3; i < n && i < 100; i++) {
        padovan[i] = padovan[i - 2] + padovan[i - 3];
        cout << ", " << padovan[i];
    }
    cout << endl;
}


void secuenciasAritmeticasGeometricas() {
    cout << "\n=== EJERCICIO 16: SECUENCIAS ARITMETICAS/GEOMETRICAS ===" << endl;
    int n;
    
    cout << "¿Cuantos numeros tiene la secuencia?: ";
    cin >> n;
    
    if (n < 2) {
        cout << "Se necesitan al menos 2 numeros" << endl;
        return;
    }
    
    double secuencia[100];
    
    cout << "Ingrese los numeros de la secuencia:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> secuencia[i];
    }
    
    
    bool esAritmetica = true;
    double diferencia = secuencia[1] - secuencia[0];
    
    for (int i = 2; i < n; i++) {
        double difActual = secuencia[i] - secuencia[i - 1];
        if (abs(difActual - diferencia) > 0.0001) {
            esAritmetica = false;
            break;
        }
    }
    
    
    bool esGeometrica = true;
    double razon = 0;
    
    if (secuencia[0] != 0) {
        razon = secuencia[1] / secuencia[0];
        
        for (int i = 2; i < n; i++) {
            if (secuencia[i - 1] == 0) {
                esGeometrica = false;
                break;
            }
            double razonActual = secuencia[i] / secuencia[i - 1];
            if (abs(razonActual - razon) > 0.0001) {
                esGeometrica = false;
                break;
            }
        }
    } else {
        esGeometrica = false;
    }
    
    
    cout << "\nAnalisis de la secuencia:" << endl;
    
    if (esAritmetica) {
        cout << "ES una secuencia ARITMETICA" << endl;
        cout << "Diferencia comun (d): " << diferencia << endl;
        cout << "Formula: a(n) = a(1) + (n-1)*d" << endl;
        cout << "Siguiente termino: " << (secuencia[n - 1] + diferencia) << endl;
    } else {
        cout << "NO es una secuencia aritmetica" << endl;
    }
    
    if (esGeometrica) {
        cout << "ES una secuencia GEOMETRICA" << endl;
        cout << "Razon comun (r): " << razon << endl;
        cout << "Formula: a(n) = a(1) * r^(n-1)" << endl;
        cout << "Siguiente termino: " << (secuencia[n - 1] * razon) << endl;
    } else {
        cout << "NO es una secuencia geometrica" << endl;
    }
    
    if (!esAritmetica && !esGeometrica) {
        cout << "La secuencia no es ni aritmetica ni geometrica" << endl;
    }
}


void sumaCuadrados() {
    cout << "\n=== EJERCICIO 17: SUMA DE CUADRADOS ===" << endl;
    int opcion, n;
    
    cout << "¿Que desea calcular?" << endl;
    cout << "1. Suma de cuadrados de primeros N naturales" << endl;
    cout << "2. Suma de cuadrados de primeros N impares" << endl;
    cout << "Opcion: ";
    cin >> opcion;
    
    cout << "Ingrese N: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "N debe ser positivo" << endl;
        return;
    }
    
    if (opcion == 1) {
        
        cout << "\nCalculando: 1^2 + 2^2 + 3^2 + ... + " << n << "^2" << endl;
        
        
        long long sumaFormula = (long long)n * (n + 1) * (2 * n + 1) / 6;
        
        
        long long sumaDirecta = 0;
        cout << "Terminos: ";
        for (int i = 1; i <= n && i <= 10; i++) {
            sumaDirecta += (long long)i * i;
            cout << i * i;
            if (i < n && i < 10) cout << " + ";
        }
        if (n > 10) {
            cout << " + ...";
            for (int i = 11; i <= n; i++) {
                sumaDirecta += (long long)i * i;
            }
        }
        cout << endl;
        
        cout << "\nResultado (formula): " << sumaFormula << endl;
        cout << "Resultado (directo): " << sumaDirecta << endl;
        cout << "Formula usada: n(n+1)(2n+1)/6" << endl;
        
    } else if (opcion == 2) {
        
        cout << "\nCalculando: 1^2 + 3^2 + 5^2 + ... + " << (2 * n - 1) << "^2" << endl;
        
        
        long long sumaFormula = (long long)n * (2 * n - 1) * (2 * n + 1) / 3;
        
        
        long long sumaDirecta = 0;
        cout << "Terminos: ";
        for (int i = 1; i <= n && i <= 10; i++) {
            int impar = 2 * i - 1;
            sumaDirecta += (long long)impar * impar;
            cout << impar * impar;
            if (i < n && i < 10) cout << " + ";
        }
        if (n > 10) {
            cout << " + ...";
            for (int i = 11; i <= n; i++) {
                int impar = 2 * i - 1;
                sumaDirecta += (long long)impar * impar;
            }
        }
        cout << endl;
        
        cout << "\nResultado (formula): " << sumaFormula << endl;
        cout << "Resultado (directo): " << sumaDirecta << endl;
        cout << "Formula usada: n(2n-1)(2n+1)/3" << endl;
    } else {
        cout << "Opcion invalida" << endl;
    }
}
