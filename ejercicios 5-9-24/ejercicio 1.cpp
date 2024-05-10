/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

#include <iostream>

using namespace std;

int main(){

int num, suma = 0, i = 1; 

cout << "Digita un numero "; 
cin >> num;

while (i <= num) // Iniciamos un bucle que se repita mientras i sea menor que num
{
    suma += i;
    i++;
}

cout << "La suma de los numero es " << suma << endl;

return 0;

}





