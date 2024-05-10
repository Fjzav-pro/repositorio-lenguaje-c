#include <iostream>

int main() {
    int longitud;
    
    // Solicitar al usuario la longitud de los vectores
    std::cout << "Ingrese la longitud de los vectores: ";
    std::cin >> longitud;

    // Declarar los vectores y el vector resultado
    int vector1[longitud];
    int vector2[longitud];
    int suma[longitud];
    
    int i = 0;
    
    // Ingresar elementos al primer vector
    std::cout << "Ingrese los elementos del primer vector:\n";
    while (i < longitud) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vector1[i];
        i++;
    }
    
    // Reiniciar el contador para ingresar elementos al segundo vector
    i = 0;
    
    // Ingresar elementos al segundo vector
    std::cout << "Ingrese los elementos del segundo vector:\n";
    while (i < longitud) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vector2[i];
        i++;
    }
    
    // Calcular la suma de los vectores
    i = 0;
    while (i < longitud) {
        suma[i] = vector1[i] + vector2[i];
        i++;
    }
    
    // Mostrar el vector resultado
    std::cout << "La suma de los dos vectores es:\n";
    i = 0;
    while (i < longitud) {
        std::cout << suma[i] << " ";
        i++;
    }
    
    return 0;
}
