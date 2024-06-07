#include <iostream>
#include "variables.h"
#include <locale.h>
#include <string.h>
using namespace std;
CIUDAD ciudades[MAX_REG];

//crud//
int obtPos(int id);
void agregar(CIUDAD *c);
void editar(CIUDAD *c, int id);
void eliminar(int id);
CIUDAD buscar(CIUDAD *c);
int menu(int op);
void principal();
void pedirDatos();

void agregar(CIUDAD *c){
    ciudades[pos] = *c;
    pos++;

}

CIUDAD buscar(int id){
    for( int =0; i <pos; i++){
        if(id == ciudades[i].id){
            return ciudades[i];
        }
    }
    CIUDAD c;
    return c;
}

int obtPos(int id){
 for(int i =0; i<pos; i++){
    if(ciudades[i].ID == id)
    posi = i;
    break;
 }
}

void editar(CIUDAD *c, int id){
    int posi = obtPos(id);
    strcpy(ciudades[posi].nombre, c->nombre);
    strcpy(ciudades[posi].descripcion, c->descripcion);
    }

void eliminar(int id){
 int posi = obtPos(id);

    for(int i = posi; i<pos; i++){
        ciudades[i] = ciudades[i+1]
    }
    pos--;
}

int menu(int op){
    int op;
    cout <<"1. agregar ";
    cout <<"2. editar";
    cout <<"3. eliminar";
    cout <<"4. buscar";
    cout <<"5. mostrar todo";
    cout <<"6. salir"
    cout <<"digite la opcion"
    cin >> op;
    return op;
}

void principal(){
    int op;
    do{
        op = menu();
        switch (op)
        {
        case 1:
        pedirDatos();
            break;
        case 6:
            cout << "adios, mi tierno\n";
            break;
        default:
          cout << "no seeas\n";
          break;
        
        
        
        }
    }while(op !=6);

}

void pedirDatos(){
    CIUDAD ciudad;
    cout << "datos de ciudad \n";
    cout << "ID: ";
    cin >> ciudad.id;
    cout << "Nombre: ";
    cin >> ciudad.nombre;
    cout << "Descripcion: ";
    cin >> ciudad.descripcion;
    agregar(&ciudad);
    cout << "registro agregado.... \n";
}