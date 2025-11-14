# Fundamentals and Control Flow

## Sebastian Andres Manotas Blanco

### EJERCICIO 1: Sumar dos números
Razonamiento: Necesito leer dos números del usuario y sumarlos. Uso variables tipo double para aceptar decimales.

### EJERCICIO 2: Convertir Celsius a Fahrenheit
Razonamiento: La fórmula es F = (C * 9/5) + 32. Debo leer la temperatura en Celsius y aplicar la fórmula.

### EJERCICIO 3: Determinar si un número es par o impar
Razonamiento: Un número es par si al dividirlo entre 2 el residuo es 0. Uso el operador módulo (%) para obtener el residuo.

### EJERCICIO 4: Calcular el área de un círculo
Razonamiento: La fórmula del área es A = π * r². Uso 3.14159 como aproximación de π y multiplico el radio por sí mismo.

### EJERCICIO 5: Intercambiar valores de dos variables
Razonamiento: Para intercambiar dos valores necesito una variable temporal. Guardo uno en temp, copio el otro al primero, y luego temp al segundo.

### EJERCICIO 6: Determinar si un número es positivo, negativo o cero
Razonamiento: Uso estructuras if-else para comparar el número con 0. Primero verifico si es mayor, luego si es menor, sino es cero.

### EJERCICIO 7: Encontrar el máximo de tres números
Razonamiento: Comparo primero dos números para encontrar el mayor, luego comparo ese resultado con el tercer número.

### EJERCICIO 8: Mostrar tabla de multiplicar
Razonamiento: Uso un bucle for que va del 1 al 10. En cada iteración multiplico el número por el contador.

### EJERCICIO 9: Calcular factorial de un número
Razonamiento: El factorial es el producto de todos los números desde 1 hasta n. Uso un bucle que multiplica cada número y lo acumula en la variable factorial.

### EJERCICIO 10: Invertir un número entero
Razonamiento: Extraigo el último dígito con % 10, lo agrego al resultado, y elimino el último dígito dividiendo entre 10. Repito hasta que el número sea 0. Si el número es negativo, trabajamos con su valor absoluto. Después, si el original era negativo, hacemos el resultado negativo.

### EJERCICIO 11: Contar los dígitos de un número
Razonamiento: Divido el número entre 10 repetidamente y cuento las divisiones. Cada división elimina un dígito hasta llegar a 0. Hay un caso especial y es el cero que tiene un dígito. Además, si es negativo trabajamos con su valor absoluto.

### EJERCICIO 12: Sumar los dígitos de un número
Razonamiento: Extraigo cada dígito con % 10, lo sumo al acumulador, y elimino el dígito con división entre 10. Repito hasta terminar. Si es negativo, trabajamos con su valor absoluto.

### EJERCICIO 13: Verificar si un número es primo
Razonamiento: Un número primo solo es divisible por 1 y por sí mismo. Pruebo dividir desde 2 hasta la raíz cuadrada del número. Si encuentro un divisor, no es primo.

### EJERCICIO 14: Determinar si un año es bisiesto
Razonamiento: Un año es bisiesto si es divisible entre 4, excepto si es divisible entre 100 (a menos que también sea divisible entre 400).

### EJERCICIO 15: Sumar los primeros N números naturales
Razonamiento: Sumo todos los números desde 1 hasta N usando un bucle. También muestro la fórmula matemática: suma = n * (n + 1) / 2. Se usaron dos métodos: Usando bucle y usando la fórmula matemática.
