#include <iostream>
using namespace std;
int main() {
    int longitud;
    
    // Solicitar al usuario la longitud de los vectores
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    // Declarar los vectores
    int vector1[100];
    int vector2[100];
    
    int i = 0;
    
    // Ingresar elementos al primer vector
    cout << "Ingrese los elementos del primer vector:\n";
    while (i < longitud) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
        i++;
    }
    
    // Reiniciar el contador para ingresar elementos al segundo vector
    i = 0;
    
    // Ingresar elementos al segundo vector
    cout << "Ingrese los elementos del segundo vector:\n";
    while (i < longitud) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
        i++;
    }
    
    // Calcular el producto punto
    int productoPunto = 0;
    i = 0;
    while (i < longitud) {
        productoPunto += vector1[i] * vector2[i];
        i++;
    }
    
    // Mostrar el resultado del producto punto
    cout << "El producto punto de los dos vectores es: " << productoPunto << endl;
    
    return 0;
}
