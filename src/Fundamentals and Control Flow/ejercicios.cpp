#include <iostream>
#include "ejercicios.h"
using namespace std;


void sumarDosNumeros() {
    cout << "\n=== EJERCICIO 1: SUMAR DOS NUMEROS ===" << endl;
    double num1, num2;
    
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    double suma = num1 + num2;
    cout << "La suma es: " << suma << endl;
}


void celsiusAFahrenheit() {
    cout << "\n=== EJERCICIO 2: CELSIUS A FAHRENHEIT ===" << endl;
    double celsius;
    
    cout << "Ingrese la temperatura en Celsius: ";
    cin >> celsius;
    
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    cout << celsius << " grados Celsius = " << fahrenheit << " grados Fahrenheit" << endl;
}


void parOImpar() {
    cout << "\n=== EJERCICIO 3: PAR O IMPAR ===" << endl;
    int numero;
    
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    
    if (numero % 2 == 0) {
        cout << numero << " es PAR" << endl;
    } else {
        cout << numero << " es IMPAR" << endl;
    }
}


void areaCirculo() {
    cout << "\n=== EJERCICIO 4: AREA DE UN CIRCULO ===" << endl;
    double radio;
    const double PI = 3.14159;
    
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    
    double area = PI * radio * radio;
    cout << "El area del circulo es: " << area << endl;
}


void intercambiarVariables() {
    cout << "\n=== EJERCICIO 5: INTERCAMBIAR VARIABLES ===" << endl;
    int a, b;
    
    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;
    
    cout << "Antes del intercambio: A = " << a << ", B = " << b << endl;
    
    
    int temp = a;
    a = b;
    b = temp;
    
    cout << "Despues del intercambio: A = " << a << ", B = " << b << endl;
}


void positivoNegativoCero() {
    cout << "\n=== EJERCICIO 6: POSITIVO, NEGATIVO O CERO ===" << endl;
    double numero;
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    if (numero > 0) {
        cout << numero << " es POSITIVO" << endl;
    } else if (numero < 0) {
        cout << numero << " es NEGATIVO" << endl;
    } else {
        cout << "El numero es CERO" << endl;
    }
}


void maximoDeTresNumeros() {
    cout << "\n=== EJERCICIO 7: MAXIMO DE TRES NUMEROS ===" << endl;
    double num1, num2, num3;
    
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    
    double maximo = num1;
    
    if (num2 > maximo) {
        maximo = num2;
    }
    if (num3 > maximo) {
        maximo = num3;
    }
    
    cout << "El numero maximo es: " << maximo << endl;
}


void tablaMultiplicar() {
    cout << "\n=== EJERCICIO 8: TABLA DE MULTIPLICAR ===" << endl;
    int numero;
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }
}


void calcularFactorial() {
    cout << "\n=== EJERCICIO 9: FACTORIAL ===" << endl;
    int numero;
    
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    
    if (numero < 0) {
        cout << "El factorial no existe para numeros negativos" << endl;
        return;
    }
    
    long long factorial = 1;
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    
    cout << "El factorial de " << numero << " es: " << factorial << endl;
}


void invertirNumero() {
    cout << "\n=== EJERCICIO 10: INVERTIR NUMERO ===" << endl;
    int numero, original;
    
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    
    original = numero;
    int invertido = 0;
    
  
    if (numero < 0) {
        numero = -numero;
    }
    
    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }
    

    if (original < 0) {
        invertido = -invertido;
    }
    
    cout << "Numero original: " << original << endl;
    cout << "Numero invertido: " << invertido << endl;
}


void contarDigitos() {
    cout << "\n=== EJERCICIO 11: CONTAR DIGITOS ===" << endl;
    int numero, original;
    
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    
    original = numero;
    
    
    if (numero == 0) {
        cout << "El numero " << numero << " tiene 1 digito" << endl;
        return;
    }
    
   
    if (numero < 0) {
        numero = -numero;
    }
    
    int contador = 0;
    while (numero > 0) {
        numero = numero / 10;
        contador++;
    }
    
    cout << "El numero " << original << " tiene " << contador << " digitos" << endl;
}


void sumarDigitos() {
    cout << "\n=== EJERCICIO 12: SUMAR DIGITOS ===" << endl;
    int numero, original;
    
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    
    original = numero;
    
    
    if (numero < 0) {
        numero = -numero;
    }
    
    int suma = 0;
    while (numero > 0) {
        int digito = numero % 10;
        suma += digito;
        numero = numero / 10;
    }
    
    cout << "La suma de los digitos de " << original << " es: " << suma << endl;
}


void verificarPrimo() {
    cout << "\n=== EJERCICIO 13: NUMERO PRIMO ===" << endl;
    int numero;
    
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    
    if (numero <= 1) {
        cout << numero << " NO es un numero primo" << endl;
        return;
    }
    
    if (numero == 2) {
        cout << numero << " ES un numero primo" << endl;
        return;
    }
    
    bool esPrimo = true;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            esPrimo = false;
            break;
        }
    }
    
    if (esPrimo) {
        cout << numero << " ES un numero primo" << endl;
    } else {
        cout << numero << " NO es un numero primo" << endl;
    }
}


void esBisiesto() {
    cout << "\n=== EJERCICIO 14: AÑO BISIESTO ===" << endl;
    int anio;
    
    cout << "Ingrese un año: ";
    cin >> anio;
    
    bool bisiesto = false;
    
    if (anio % 4 == 0) {
        if (anio % 100 == 0) {
            if (anio % 400 == 0) {
                bisiesto = true;
            }
        } else {
            bisiesto = true;
        }
    }
    
    if (bisiesto) {
        cout << anio << " ES un año bisiesto" << endl;
    } else {
        cout << anio << " NO es un año bisiesto" << endl;
    }
}


void sumarNaturales() {
    cout << "\n=== EJERCICIO 15: SUMA DE N NUMEROS NATURALES ===" << endl;
    int n;
    
    cout << "Ingrese un numero N: ";
    cin >> n;
    
    if (n < 1) {
        cout << "Por favor ingrese un numero positivo" << endl;
        return;
    }
    

    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    
    cout << "La suma de los primeros " << n << " numeros naturales es: " << suma << endl;
    
   
    int sumaFormula = n * (n + 1) / 2;
    cout << "Verificacion con formula: " << sumaFormula << endl;
}
