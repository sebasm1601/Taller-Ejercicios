# Data Structures and Memory

## Sebastian Andres Manotas Blanco

### EJERCICIO 1: Mostrar dirección de memoria y tamaño de variable
 Razonamiento: Uso el operador & para obtener la dirección y sizeof() para el tamaño. Esto ayuda a entender cómo se almacenan las variables en memoria.
### EJERCICIO 2: Intercambiar dos números usando puntero
 Razonamiento: Paso las direcciones de las variables a una función. Dentro de la función, uso el operador * para acceder y modificar los valores originales.
### EJERCICIO 3: Sumar elementos de arreglo usando punteros
Razonamiento: Recorro el arreglo usando aritmética de punteros. Un puntero puede moverse a través del arreglo con ++ o con aritmética.
### EJERCICIO 4: Encontrar máximo usando punteros
Razonamiento: Recorro el arreglo con un puntero y comparo valores. Mantengo un puntero al elemento máximo encontrado.
### EJERCICIO 5: Asignación dinámica de arreglo
Razonamiento: Uso 'new' para asignar memoria en tiempo de ejecución. Esto permite arreglos de tamaño variable. Debo liberar la memoria con 'delete[]'.
