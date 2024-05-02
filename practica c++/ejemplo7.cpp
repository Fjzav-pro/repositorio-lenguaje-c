#include <iostream>
using namespace std;

#define MAX 100

int Vector[MAX];
int pos=0;

void agregar(int num);
void mostrar();

int main(int argc, char const *argv[])
{
    
    int cant;// almacenar la cantidad de elemntos//
    int num;
    cout << "dime cuantos numeros quieres almacenar: ";
    cin >> cant;
    for(int  i=0; i< cant; i++){
        cout << "dime un #: ";
        cin >> num;
        agregar(num);
    }
cout << "mostrar numeros\n";
mostrar();
    return 0;
}
void agregar(int num){

Vector[pos]= num;
pos++;

}

void mostrar(){
    for(int i=0; i<=pos; i++){
        cout << Vector[i] << endl;
    }
}
