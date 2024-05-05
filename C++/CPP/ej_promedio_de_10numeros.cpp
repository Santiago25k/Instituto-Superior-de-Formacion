//algoritmo que reciaa como entrada 10 numeros enteros y calcule el promedio

#include "encabezado.hpp"
/*
int main () {

int numeros[10];//arreglo donde almacenare los 10 numeros
int suma = 0;//variable donde guardare la suma
int contador = 0;//contador para guardar las iteraciones

cout << "ingresae los 10 numeros porfavor " << endl;

while(contador < 10) {
    cout << "Numeros " << contador + 1 << " : ";
    cin >> numeros[contador];
    suma = suma + numeros[contador]; //sumamos cada numero a la cantidad total
    contador++; 
}
    const double promedio = static_cast<double>(suma) / 10;
    cout << "El promedio de los numeros ingresados es " << promedio << endl;

    return 0;
}

*/


int main () {
    int numeros[10]; // arreglo donde guardaré los 10 números
    int suma = 0; // variable donde guardaré la suma de los números
    int contador = 0; // variable donde guardaré el número de iteraciones

    cout << "Enter 10 numbers" << endl;

    // El bucle while se ejecutará hasta que contador sea menor que 10
    while (contador < 10) {
        // Solicito al usuario que ingrese un número y lo almaceno en el arreglo
        cout << "Number " << contador + 1 << ": ";
        cin >> numeros[contador];
        
        // Sumo el número ingresado al acumulador suma
        suma += numeros[contador];

        // Incremento el contador para avanzar al siguiente número
        contador++;
    }

    // Calculo el promedio de los números ingresados.
    // Se utiliza static_cast<double> para convertir la variable 'suma' a tipo double antes de dividirla por 10.
    // Esto se hace para realizar una división de punto flotante en lugar de una división entera,
    // lo que garantiza que el resultado del promedio tenga decimales precisos.
    const double promedio = static_cast<double>(suma) / 10;

    // Imprimo el promedio de los números
    cout << "The average of the 10 numbers is: " << promedio << endl;

    return 0;
}