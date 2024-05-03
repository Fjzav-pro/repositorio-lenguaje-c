#include <iostream>
#include <vector>

using namespace std;

int main() {
    int longitud;
    
    // Solicitar al usuario la longitud de los vectores
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;
    
    // Declarar los vectores
    vector<int> vector1(longitud), vector2(longitud), resultado(longitud);
    
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
    
    // Calcular la suma de los vectores y almacenar el resultado en el tercer vector
    cout << "La suma de los vectores es:" << endl;
    for (int i = 0; i < longitud; i++) {
        resultado[i] = vector1[i] + vector2[i];
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}
