# Mathematics and Algorithms

## Sebastian Andres Manotas Blanco

### EJERCICIO 1: Convertir número decimal a binario
Razonamiento: Divido repetidamente entre 2 y guardo los residuos. Los residuos en orden inverso forman el número binario.
### EJERCICIO 2: Generar número aleatorio entre 1 y 100
Razonamiento: Uso la función rand() de C++ y la "semilla" srand() para que cada ejecución genere números diferentes.
### EJERCICIO 3: Encontrar MCD y MCM de dos o tres números
Razonamiento: MCD usando Euclides. MCM usando la fórmula: MCM(a,b) = (a*b)/MCD(a,b). Para 3 números: MCD(a,b,c) = MCD(MCD(a,b), c)
### EJERCICIO 4: Calcular área de triángulo (fórmula de Herón)
Razonamiento: Fórmula de Herón: A = √(s(s-a)(s-b)(s-c)) donde s = (a+b+c)/2
### EJERCICIO 5: Resolver ecuación cuadrática
Razonamiento: ax² + bx + c = 0. Uso la fórmula: x = (-b ± √(b²-4ac)) / 2a . El discriminante (b²-4ac) determina si hay 2, 1 o 0 soluciones reales.
### EJERCICIO 6: Implementar conjetura de Collatz
Razonamiento: Si n es par, divido entre 2. Si es impar, multiplico por 3 y sumo 1. La conjetura dice que siempre se llega a 1.
### EJERCICIO 7: Calcular volumen de una esfera
Razonamiento: La fórmula es V = (4/3)πr³
### EJERCICIO 8: Estimación del número de Euler (e)
Razonamiento: e = 1 + 1/1! + 1/2! + 1/3! + ... (serie infinita). Calculo hasta n términos para aproximar.
### EJERCICIO 9: Determinar si es perfecto, abundante o triangular
Razonamiento: 
 - Perfecto: suma de divisores = número (ej: 6 = 1+2+3)
 - Abundante: suma de divisores > número
- Triangular: n = k(k+1)/2 para algún k
### EJERCICIO 10: Fibonacci, Kaprekar, Narcisista o Mersenne
 Razonamiento:
 - Fibonacci: pertenece a la secuencia 1,1,2,3,5,8,13...
 - Kaprekar: n² dividido y sumado da n (ej: 45² = 2025, 20+25=45)
 - Narcisista: suma de dígitos elevados a la potencia = número (ej: 153 = 1³+5³+3³)
 - Mersenne: de la forma 2^p – 1
### EJERCICIO 11: Serie de Leibniz para aproximar π
Razonamiento: π/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - ...
### EJERCICIO 12: Método de Newton para raíces cuadradas y cúbicas
Razonamiento: Método iterativo: x_{n+1} = x_n - f(x_n)/f'(x_n)
 Para √a: x_{n+1} = (x_n + a/x_n) / 2
 Para ³√a: x_{n+1} = (2*x_n + a/x_n²) / 3
### EJERCICIO 13: Teorema Binomial y aproximación de Stirling
Razonamiento:
- Binomial: (a+b)^n = Σ C(n,k) * a^(n-k) * b^k
- Stirling: n! ≈ √(2πn) * (n/e)^n
### EJERCICIO 14: Serie de Taylor para logaritmos
 Razonamiento: ln(1+x) = x - x²/2 + x³/3 - x⁴/4 + ... (para -1 < x ≤ 1)
### EJERCICIO 15: Generar secuencias de Fibonacci, Lucas y Padovan
 Razonamiento:
 - Fibonacci: F(n) = F(n-1) + F(n-2), con F(0)=0, F(1)=1
 - Lucas: L(n) = L(n-1) + L(n-2), con L(0)=2, L(1)=1
 - Padovan: P(n) = P(n-2) + P(n-3), con P(0)=1, P(1)=1, P(2)=1
### EJERCICIO 16: Determinar secuencias aritméticas o geométricas
 Razonamiento:
 - Aritmética: diferencia constante entre términos consecutivos
 - Geométrica: razón constante entre términos consecutivos
### EJERCICIO 17: Suma de cuadrados de primeros N naturales u impares
 Razonamiento:
 - Suma cuadrados naturales: 1² + 2² + ... + n² = n(n+1)(2n+1)/6
 - Suma cuadrados impares: 1² + 3² + 5² + ... = n(2n-1)(2n+1)/3



































