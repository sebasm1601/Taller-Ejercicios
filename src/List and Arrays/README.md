# List and Arrays

## Sebastian Andres Manotas Blanco

### EJERCICIO 1: Encontrar el mínimo y máximo en una lista
Razonamiento: Asumo que el primer elemento es el min y max inicial, luego recorro el arreglo comparando cada elemento para actualizar min y max.
### EJERCICIO 2: Calcular el promedio de una lista
Razonamiento: Sumo todos los elementos del arreglo y divido entre la cantidad de elementos. Uso double para obtener decimales.
### EJERCICIO 3: Contar números pares e impares en una lista
Razonamiento: Recorro el arreglo y uso el operador % para verificar si cada número es par (residuo 0) o impar (residuo diferente de 0).
### EJERCICIO 4: Ordenar una lista en orden ascendente
Razonamiento: Uso algo llamado algoritmo de burbuja. Comparo elementos adyacentes y los intercambio si están en el orden incorrecto.
### EJERCICIO 5: Rotar una lista a la derecha una posición
Razonamiento: Guardo el último elemento en una variable temporal, desplazo todos los elementos una posición a la derecha, y coloco el último elemento guardado en la primera posición.
### EJERCICIO 6: Concatenar dos listas sin usar +
Razonamiento: Creo un tercer arreglo donde copio primero todos los elementos de la primera lista, luego todos los elementos de la segunda lista.
### EJERCICIO 7: Contar cuántas veces aparece un número en una lista
Razonamiento: Recorro el arreglo comparando cada elemento con el número buscado. Cada vez que encuentro una coincidencia, incremento un contador.
### EJERCICIO 8: Encontrar el elemento más frecuente en una lista
Razonamiento: Para cada elemento, cuento cuántas veces aparece en toda la lista. Guardo el elemento con mayor frecuencia encontrada.
### EJERCICIO 9: Encontrar el segundo número más grande en una lista
Razonamiento: Primero encuentro el máximo, luego encuentro el máximo
entre los números que son menores que el primer máximo.
### EJERCICIO 10: Eliminar el primer elemento de una lista
Razonamiento: Desplazo todos los elementos una posición a la izquierda, sobrescribiendo el primer elemento. El tamaño efectivo de la lista se reduce en 1.
### EJERCICIO 11: Sumar números consecutivos en una lista
Razonamiento: Recorro la lista y sumo cada par de números consecutivos (elemento en posición i con elemento en posición i+1).
### EJERCICIO 12: Encontrar el MCD de una lista de números
Razonamiento: Uso la función auxiliar mcdDosNumeros para calcular el MCD de dos números usando el algoritmo de Euclides. Luego calculo el MCD de toda la lista aplicando la propiedad: MCD(a,b,c) = MCD(MCD(a,b), c)
