'''

Realizar un programa en c utilzando funciones y punteros en donde le 
permita al usuario realizar las operaciones sobre un arreglo de 
enteros: insertar, eliminar, agregar, renombrar. Se utiliza un menu 
para elegir la operacion que el usuario desea utilizar

'''

def insertar_elemento(arr, elemento, posicion):
    if 0 <= posicion <= len(arr):
        arr.insert(posicion, elemento)
        print("Elemento insertado correctamente.")
    else:
        print("Posición inválida.")

def eliminar_elemento(arr, posicion):
    if 0 <= posicion < len(arr):
        eliminado = arr.pop(posicion)
        print(f"Elemento {eliminado} eliminado correctamente.")
    else:
        print("Posición inválida.")

def agregar_elemento(arr, elemento):
    arr.append(elemento)
    print("Elemento agregado correctamente.")

def renombrar_elemento(arr, posicion, nuevo_valor):
    if 0 <= posicion < len(arr):
        arr[posicion] = nuevo_valor
        print("Elemento renombrado correctamente.")
    else:
        print("Posición inválida.")

def mostrar_arreglo(arr):
    if arr:
        print("Contenido del arreglo:", arr)
    else:
        print("El arreglo está vacío.")

def main():
    arr = []
    opcion = 0

    while opcion != 6:
        print("\nMenu de Operaciones sobre el Arreglo")
        print("1. Insertar Elemento")
        print("2. Eliminar Elemento")
        print("3. Agregar Elemento")
        print("4. Renombrar Elemento")
        print("5. Mostrar Arreglo")
        print("6. Salir")
        
        try:
            opcion = int(input("Seleccione una opción: "))

            if opcion == 1:
                elemento = int(input("Ingrese el elemento a insertar: "))
                posicion = int(input(f"Ingrese la posición (0 a {len(arr)}): "))
                insertar_elemento(arr, elemento, posicion)

            elif opcion == 2:
                posicion = int(input(f"Ingrese la posición a eliminar (0 a {len(arr) - 1}): "))
                eliminar_elemento(arr, posicion)

            elif opcion == 3:
                elemento = int(input("Ingrese el elemento a agregar: "))
                agregar_elemento(arr, elemento)

            elif opcion == 4:
                posicion = int(input(f"Ingrese la posición a renombrar (0 a {len(arr) - 1}): "))
                nuevo_valor = int(input("Ingrese el nuevo valor: "))
                renombrar_elemento(arr, posicion, nuevo_valor)

            elif opcion == 5:
                mostrar_arreglo(arr)

            elif opcion == 6:
                print("Saliendo...")

            else:
                print("Opción inválida.")

        except ValueError:
            print("Entrada no válida. Por favor, ingrese un número.")

if __name__ == "__main__":
    main()
