#include <iostream>
using namespace std;
int main() {
    int num = 1;
    int suma = 0;

    while (num <= 100) {
        suma += num * num;
        num++;
    }

    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: " << suma << endl;

    return 0;
}
