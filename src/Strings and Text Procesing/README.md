# Strings and Text Processing

## Sebastian Andres Manotas Blanco

### EJERCICIO 1: Verificar si una palabra es un palíndromo
 Razonamiento: Un palíndromo se lee igual de izquierda a derecha que de derecha a izquierda. Comparo el primer carácter con el último, el segundo con el penúltimo, etc.
Si todos coinciden, es un palíndromo.
### EJERCICIO 2: Verificar si dos palabras son anagramas
Razonamiento: Dos palabras son anagramas si tienen las mismas letras, pero en diferente orden. Cuento la frecuencia de cada letra en ambas palabras y las comparo.
### EJERCICIO 3: Contar la frecuencia de cada letra en un string
Razonamiento: Uso un arreglo de 26 posiciones (una por cada letra del alfabeto).
Recorro el string y por cada letra incremento su contador correspondiente.
### EJERCICIO 4: Implementar cifrado César
Razonamiento: El cifrado César desplaza cada letra un número fijo de posiciones. Por ejemplo, con desplazamiento 3: A→D, B→E, ..., X→A, Y→B, Z→C. Uso aritmética modular para manejar el ciclo del alfabeto.
### EJERCICIO 5: Verificar si un string es un pangrama
Razonamiento: Un pangrama contiene todas las letras del alfabeto al menos una vez. Marco cada letra que encuentro y al final verifico si están todas.
### EJERCICIO 6: Comprimir un string eliminando caracteres repetidos consecutivos
Razonamiento: Recorro el string y solo escribo un carácter cuando es diferente al anterior. Por ejemplo: "aaabbccca" → "abca"
### EJERCICIO 7: Contar caracteres en un string usando punteros
Razonamiento: Un puntero es una variable que almacena una dirección de memoria. En vez de usar índices (texto[i]), uso un puntero que recorre el string. Incremento el puntero hasta llegar al carácter nulo '\0'.
### EJERCICIO 8: Verificar si una frase es un palíndromo de palabras
Razonamiento: Un palíndromo de palabras se lee igual palabra por palabra en ambas direcciones. Por ejemplo: "amor a roma" → ["amor", "a", "roma"] → ["roma", "a", "amor"] Extraigo las palabras, las guardo en un arreglo y comparo desde los extremos.
