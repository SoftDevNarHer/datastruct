#include <stdio.h>
#include <stdlib.h>

void insertarElemento(int *arr, int *n, int elemento, int posicion);
void eliminarElemento(int *arr, int *n, int posicion);
void agregarElemento(int *arr, int *n, int elemento);
void renombrarElemento(int *arr, int n, int posicion, int nuevoValor);
void mostrarArreglo(int *arr, int n);

int main() {
    int arr[100];
    int n = 0; 
    int opcion, elemento, posicion, nuevoValor;

    do {
        printf("\nMenu de Operaciones sobre el Arreglo\n");
        printf("1. Insertar Elemento\n");
        printf("2. Eliminar Elemento\n");
        printf("3. Agregar Elemento\n");
        printf("4. Renombrar Elemento\n");
        printf("5. Mostrar Arreglo\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese el elemento a insertar: ");
                scanf("%d", &elemento);
                printf("Ingrese la posicion (0 a %d): ", n);
                scanf("%d", &posicion);
                if (posicion >= 0 && posicion <= n) {
                    insertarElemento(arr, &n, elemento, posicion);
                } else {
                    printf("Posicion invalida!\n");
                }
                break;

            case 2:
                printf("Ingrese la posicion a eliminar (0 a %d): ", n - 1);
                scanf("%d", &posicion);
                if (posicion >= 0 && posicion < n) {
                    eliminarElemento(arr, &n, posicion);
                } else {
                    printf("Posicion invalida!\n");
                }
                break;

            case 3:
                printf("Ingrese el elemento a agregar: ");
                scanf("%d", &elemento);
                agregarElemento(arr, &n, elemento);
                break;

            case 4:
                printf("Ingrese la posicion a renombrar (0 a %d): ", n - 1);
                scanf("%d", &posicion);
                if (posicion >= 0 && posicion < n) {
                    printf("Ingrese el nuevo valor: ");
                    scanf("%d", &nuevoValor);
                    renombrarElemento(arr, n, posicion, nuevoValor);
                } else {
                    printf("Posicion invalida!\n");
                }
                break;

            case 5:
                mostrarArreglo(arr, n);
                break;

            case 6:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida!\n");
        }
    } while(opcion != 6);

    return 0;
}

void insertarElemento(int *arr, int *n, int elemento, int posicion) {
    if (*n < 100) {
        for (int i = *n; i > posicion; i--) {
            arr[i] = arr[i - 1];
        }
        arr[posicion] = elemento;
        (*n)++;
        printf("Elemento insertado correctamente.\n");
    } else {
        printf("No se puede insertar, el arreglo esta lleno.\n");
    }
}

void eliminarElemento(int *arr, int *n, int posicion) {
    for (int i = posicion; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Elemento eliminado correctamente.\n");
}

void agregarElemento(int *arr, int *n, int elemento) {
    if (*n < 100) {
        arr[*n] = elemento;
        (*n)++;
        printf("Elemento agregado correctamente.\n");
    } else {
        printf("No se puede agregar, el arreglo esta lleno.\n");
    }
}

void renombrarElemento(int *arr, int n, int posicion, int nuevoValor) {
    arr[posicion] = nuevoValor;
    printf("Elemento renombrado correctamente.\n");
}

void mostrarArreglo(int *arr, int n) {
    printf("Contenido del arreglo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
