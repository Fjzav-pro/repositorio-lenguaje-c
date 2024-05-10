/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/

#include <iostream>
using namespace std;
int main() {
    int num = 99; // Comenzamos desde 99, el mayor número impar dentro de 1 y 100

    cout << "Numeros impares en orden descendente entre 1 y 100:\n";

    while (num >= 1) {
        cout << num << " ";
        num -= 2; // Restamos 2 para obtener el siguiente número impar
    }

    cout << std::endl;

    return 0;
}



