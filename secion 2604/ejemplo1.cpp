#include<iostream>
using namespace std;
//Constante en mayusculas//
#define MAX 8

int nums[MAX];
int pos = 0; //posicion del elemento en el arreglo//

void agregarNum(int num){
    if (pos<MAX){
          nums[pos]= num;
          pos++;
          
    }else{
        cout<<"no se puede agregar el numero /n";
    }
}

int sumar(int suma, int ultElem){
    if(ultElem == -1)
    {
        return suma;
    }else{
    suma = suma + nums[ultElem];
    sumar(suma, ultElem -1);
    }
}

void menu(){
    int op, num;
    int suma =0;
    cout<<"1. agregar elemnto. "<< endl;
    cout<<"2. sumar "<< endl;
    cout<<"3. Mostrar "<< endl;
    cout<<"4. Salir" << endl;
    cin >> op;

    switch (op){
        case 1:
        cout<< "dime un numero";
        cin >> num;
        agregarNum(num);
        break;
        case 2:
        cout << "la suma es: " << sumar(suma, pos - 1)<< endl;
        break;
        case 4:
        break;
        default:
        cout<<"no existe";
        break;

    }
    menu();
}
int main(int argc, char const *argv[])
{
   menu();
   
    return 0;
}
