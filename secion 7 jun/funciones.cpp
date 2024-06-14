#include <iostream>
#include "variables.h"
#include <locale.h>
#include <string.h>
using namespace std;
CIUDAD ciudades[MAX_REG];
int pos = 0;

// crud//
int obtPos(int id);
void agregar(CIUDAD *c);
void editar(CIUDAD *c, int id);
void eliminar(int id);
CIUDAD buscar(CIUDAD *c);
int menu();
void principal();
void pedirDatos();
void mostrarDatos();
void showData(CIUDAD &c);
void buscarPorID();
void editarDatos();
void eliminarDatos();



void agregar(CIUDAD *c)
{
    ciudades[pos] = *c;
    pos++;
}

CIUDAD buscar(int id)
{
    for (int i = 0; i < pos; i++)
    {
        if (id == ciudades[i].id)
        {
            return ciudades[i];
        }
    }
    CIUDAD c;
    return c;
}

int obtPos(int id)
{
    
    for (int i = 0; i < pos; i++)
    {
        if (ciudades[i].id == id){
            return i;
        }

       
    }
     return -1;
}

void editar(CIUDAD *c, int id)
{
    int posi = obtPos(id);
    strcpy(ciudades[posi].nombre, c->nombre);
    strcpy(ciudades[posi].descripcion, c->descripcion);
}

void eliminar(int id)
{
    int posi = obtPos(id);

    for (int i = posi; i < pos; i++)
    {
        ciudades[i] = ciudades[i + 1];
    }
    pos--;
}

int menu()
{
    int op;
    cout << "1. agregar ";
    cout << "2. editar";
    cout << "3. eliminar";
    cout << "4. buscar";
    cout << "5. mostrar todo";
    cout << "6. salir";
    cout << "digite la opcion";
    cin >> op;
    return op;
}

void principal()
{
    int op;
    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            pedirDatos();
            break;
        case 2:
            editarDatos();
            break;
        case 3:
            eliminarDatos();
            break;
        case 4:
            buscarPorID();
            break;
        case 5:
            mostrarDatos();
            break;
        case 6:
            cout << "adios, mi tierno\n";
            break;
        default:
            cout << "no seeas\n";
            break;
        }
        
    } while (op != 6);
}

void pedirDatos()
{
    CIUDAD ciudad;
    cout << "datos de ciudad \n";
    cout << "ID: ";
    cin >> ciudad.id;
    if(obtPos(ciudad.id) != -1){
        cout << "ya existe, loquillo \n";
        return;
    }
    cout << "Nombre: ";
    scanf (" %[^\n]", ciudad.nombre);
    cout << "Descripcion: ";
    scanf(" %[^\n]", ciudad.descripcion);
    agregar(&ciudad);
    cout << "registro agregado.... \n";}


void mostrarDatos(){

    if (pos == 0){
        cout << "no hay registro \n";
        return;
    }
    for(int i =0; i<pos; i++){
       showData(ciudades[i]);

    }
}
void buscarPorID (){
    int id;
    cout << "Dime el Id de la ciudad a buscar: ";
    cin >> id;

    CIUDAD c;
    c = buscar(id);
   
}

void showData(CIUDAD &c){
    cout <<"==================" << endl;
    cout << c.id << endl;
    cout << c.nombre << endl;
    cout << c.descripcion << endl;
    cout << "==============" << endl;
}

void editarDatos(){
    int id;
    cout << "escribe el Id de la ciudad a editar" << endl;
    cin >> id;
    if(obtPos(id)== -1){
        cout << "no se encontro registro \n";
        return;
    }
    CIUDAD c = buscar(id);
    cout << "datos actuales:\n ";
    showData(c);
    cout << "nombre ";
    scanf(" %[^\n]", c.nombre);
    cout << "descripcion ";
    scanf(" %[^\n]", c.descripcion);
    editar(&c, id);
    cout << "registro actualizado.... \n";
}

void eliminarDatos(){
    int id;
    cout << "Ciudad - Eliminar\n";
    cout << "ID: ";
    cin >> id;
    if (obtPos(id)== -1){
        cout << "no se encontro registro \n";
        return;
    }
    eliminar(id);

}