# Estructuras de Datos en C y Python

Este repositorio contiene implementaciones de varias estructuras de datos en lenguaje C. Cada estructura está acompañada de ejemplos y descripciones de su uso. Es ideal para estudiantes o desarrolladores que quieran profundizar en el manejo de estructuras de datos utilizando C.

# Complejidad de un Algoritmo
- Es cuando ejecutamos un programa
- Es la medida de lo que utiliza un algoritmo
1. Algoritmo de ordenamiento por inserción: Necesita una cantidad constante de memoria.
2. Matriz Dispersa: La mayoría de los elementos es cero, el cual solo almacena los elementos 10 nulos.
3. Listas enlazadas: Para almacenar elementos debido que cada nodo contiene un puntero al siguiente nodo.
4. Algoritmo en complejidad cuadratica: Cuando el espacio requerido aumenta proporcionalmente al tamano de la entrada.

## Tablas de la Base de Datos

### Usuarios
| Campo     | Tipo de Dato | Descripción           |
| --------- | ------------ | --------------------- |
| id        | Integer      | Identificador único   |
| username  | String       | Nombre de usuario     |
| password  | String       | Contraseña (hashed)   |
| email     | String       | Correo electrónico    |

### Tareas
| Campo        | Tipo de Dato | Descripción               |
| ------------ | ------------ | ------------------------- |
| id           | Integer      | Identificador único       |
| user_id      | Integer      | Referencia al ID del usuario |
| title        | String       | Título de la tarea        |
| description  | Text         | Descripción de la tarea   |
| due_date     | DateTime     | Fecha límite             |
| completed    | Boolean      | Estado de la tarea        |



## Estructuras de Datos

1. **Listas Enlazadas (Linked List)**
   - Lista Simplemente Enlazada
   - Lista Doblemente Enlazada
   - Lista Circular

2. **Pilas (Stack)**
   - Implementación basada en arrays
   - Implementación basada en listas enlazadas
   - Aplicaciones comunes (validación de expresiones, conversión de infijo a postfijo)

3. **Colas (Queue)**
   - Cola simple basada en arrays
   - Cola basada en listas enlazadas
   - Cola doble (Deque)
   - Cola de prioridad

4. **Árboles (Trees)**
   - Árbol Binario
   - Árbol Binario de Búsqueda (BST)
   - Árbol AVL (Auto-balanceado)
   - Árbol Rojo-Negro (Red-Black Tree)

5. **Grafos (Graphs)**
   - Representación mediante listas de adyacencia
   - Representación mediante matrices de adyacencia
   - Algoritmos básicos (DFS, BFS, Dijkstra, Floyd-Warshall)

6. **Tablas Hash (Hash Tables)**
   - Implementación con manejo de colisiones usando encadenamiento
   - Implementación con manejo de colisiones usando direccionamiento abierto

## Requisitos

- Un compilador de C (como `gcc`)
- Entorno de desarrollo como `make` (opcional, pero recomendado)

## Cómo Usar

1. Clona el repositorio:
   ```bash
   git clone https://github.com/SoftDevNarHer/datastruct.git
