#include <iostream>
#include <vector>

using namespace std;

int main() {
    int longitud;
    
    // Solicitar al usuario la longitud de los vectores
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;
    
    // Declarar los vectores
    vector<int> vector1(longitud), vector2(longitud);
    
    // Solicitar al usuario ingresar los elementos del primer vector
    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < longitud; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vector1[i];
    }
    
    // Solicitar al usuario ingresar los elementos del segundo vector
    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < longitud; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vector2[i];
    }
    
    // Calcular el producto punto
    int productoPunto = 0;
    for (int i = 0; i < longitud; i++) {
        productoPunto += vector1[i] * vector2[i];
    }
    
    // Mostrar el resultado
    cout << "El producto punto de los vectores es: " << productoPunto << endl;

    return 0;
}
