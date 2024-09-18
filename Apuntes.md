## Complejidad de un Algoritmo
- Es cuando ejecutamos un programa
- Es la medida de lo que utiliza un algoritmo

### Algunos algoritmos
| Algoritmo     | Descripción    |
| --------- | ------------------ |
| Ordenamiento por inserción | Necesita una cantidad constante de memoria. |
| Matriz Dispersa | La mayoría de los elementos es cero, el cual solo almacena los elementos 10 nulos.   |
| Listas enlazadas | Para almacenar elementos debido que cada nodo contiene un puntero al siguiente nodo. |
| Complejidad Cuadrática | Cuando el espacio requerido aumenta proporcionalmente al tamano de la entrada. |


# Complejidades Algorítmicas Comunes

Las complejidades algorítmicas permiten medir el rendimiento de los algoritmos en función del tamaño de la entrada, \( n \), y cómo este crece. A continuación, se describen algunos de los tipos más comunes de complejidades.

## 1. Constante (O(1))

El número de operaciones es fijo, independientemente del tamaño de la entrada. Este tipo de complejidad es el más eficiente.
  
### Ejemplo:
Acceder a un elemento de un array por índice:
```c
int arr[5] = {1, 2, 3, 4, 5};
int x = arr[2]; // O(1)
```

---

## 2. Lineal (O(n))

El tiempo de ejecución crece proporcionalmente al tamaño de la entrada. Es común en algoritmos que recorren listas o arreglos.

### Ejemplo:
Un bucle que imprime cada elemento de una lista:
```c
for (int i = 0; i < n; i++) {
    printf("%d\n", i); // O(n)
}
```

---

## 3. Cuadrática (O(n²))

El número de operaciones crece con el cuadrado del tamaño de la entrada. Esto ocurre frecuentemente en algoritmos que tienen bucles anidados.

### Ejemplo:
Un algoritmo de ordenamiento por burbuja:
```c
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // Operación O(n²)
    }
}
```

---

## 4. Cúbica (O(n³))

El número de operaciones aumenta cúbicamente en función del tamaño de la entrada. Suele aparecer en problemas más complejos con tres bucles anidados.

### Ejemplo:
Multiplicación de matrices:
```c
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            // Operación O(n³)
        }
    }
}
```

---

## 5. Logarítmica (O(log n))

El número de operaciones crece logarítmicamente con el tamaño de la entrada, dividiéndola en partes más pequeñas con cada iteración. Es común en algoritmos que dividen el problema repetidamente, como la búsqueda binaria.

### Ejemplo:
Búsqueda binaria en un array ordenado:
```c
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) return mid; // O(log n)
        if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}
```

---

## 6. Exponencial (O(2ⁿ))

El número de operaciones se duplica con cada incremento en el tamaño de la entrada. Es altamente ineficiente para grandes valores de \( n \), y aparece en algoritmos de fuerza bruta.

### Ejemplo:
Cálculo recursivo de Fibonacci:
```c
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2); // O(2ⁿ)
}
```

---

## 7. Factorial (O(n!))

El número de operaciones crece de manera factorial con el tamaño de la entrada. Esta complejidad aparece en problemas que implican permutaciones o combinaciones, como el problema del viajero.

### Ejemplo:
Resolver el problema del viajero mediante fuerza bruta tiene una complejidad de O(n!).

---

## Resumen de Complejidades

| Notación   | Descripción                                   | Ejemplo                                   |
|------------|-----------------------------------------------|-------------------------------------------|
| **O(1)**   | Constante, el tiempo no depende de \( n \)     | Acceder a un elemento de un array         |
| **O(n)**   | Lineal, crece proporcionalmente al tamaño      | Recorrer una lista                        |
| **O(n²)**  | Cuadrática, crecimiento rápido con bucles      | Ordenamiento por burbuja                  |
| **O(n³)**  | Cúbica, tres bucles anidados                  | Multiplicación de matrices                |
| **O(log n)**| Logarítmica, divide el problema en cada paso | Búsqueda binaria                          |
| **O(2ⁿ)**  | Exponencial, crecimiento explosivo            | Cálculo recursivo de Fibonacci            |
| **O(n!)**  | Factorial, extremadamente ineficiente         | Problema del viajero                      |
