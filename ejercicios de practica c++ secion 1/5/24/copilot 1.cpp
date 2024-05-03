#include <iostream>

using namespace std;

int sumaNaturales(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n;
    cout << "Ingrese un numero natural: ";
    cin >> n;
    
    int resultado = sumaNaturales(n);
    
    cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << resultado << endl;
    
    return 0;
}
