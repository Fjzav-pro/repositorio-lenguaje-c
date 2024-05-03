#include <iostream>

using namespace std;

int sumaNaturales(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;
    cout << "Ingrese un numero:  ";
    cin >> n;
    
    int resultado = sumaNaturales(n);
    
    cout << "La suma de los numeros desde 1 hasta " << n << " es: " << resultado << endl;
    
    return 0;
}
