#include <iostream>
#include "variables.h"
using namespace std;

int main(int argc, char const *argv[])
{
    PERSON teacher;
    cout << "CIF: ";
    cin >> teacher.cif;
    cout << "Nombre: ";
    scanf(" %[^\n]", teacher.name);
    cout << "Last name: ";
    scanf(" %[^\n]", teacher)

    cout << "el teacher tiene por cif: " <<  teacher.cif << endl;
    cout << "el nombre del teacher es: " << teacher.name << endl;


    PERSON Student;
    cout << "CIF: ";
    cin >> Student.cif;
    cout << "Nombre: ";
    scanf(" %[^\n]", Student.name);

    cout << "el Student tiene por cif: " <<  Student.cif << endl;
    cout << "el nombre del Student es: " << Student.name << endl;


    return 0;
}
