#include<iostream>
#include "variables.h"
                             

using namespace std;
/*Prototipo de funciones */
void iniciar();
void ingresarEdades();
void principal();
void mostrarEdad();
void edadMayo();
void edadMeno();
void promedio1();



/*Funciones*/
void menu(){

        system("cls||clear");  

cout<<"1. Ingresar edades"<<endl;
cout<<"2. Mostrar edades"<<endl;
cout<<"3. Mostrar edad mayor"<<endl;
cout<<"4. Mostrar edad menor"<<endl;
cout<<"5. Mostrar promedio de edades"<<endl;
cout<<"6. Salir"<<endl;



}

/*Agregar edades*/

void ingresarEdades(){

    system("cls||clear");

    cout<<"Dime las edades";
    cin>>edades[posicion];
    posicion++;

    system("pause");


}


void iniciar(){
        int opcion;

    while(opcion !=6 ){  
        menu();
        cin>>opcion;

        switch (opcion)
        {
        case 1:
                ingresarEdades();
        break;
        case 2:
        mostrarEdad();
        break;
        case 3:
        edadMayo();
        break;
        case 4:
        edadMeno();
        break;
        case 5:
        promedio1();
        break;
        case 6:
                cout<<"Adios"<<endl;

        default:
        break;
        }

    }
}



void mostrarEdad(){
        system("cls||clear");
        cout<<"Edades"<<endl;
        for(int i = 0; i<posicion;i++){

                cout<<edades[i];
        }
        system("pause");
}



void edadMayo(){
        system("cls||clear");
if (posicion == 0) {
        cout << "No hay edades ingresadas." << endl;
    } else {
        edadMayor = edades[0];
        for (int i = 1; i < posicion; i++) {
            if (edades[i] > edadMayor) {
                edadMayor = edades[i];
            }
        }
        cout << "La edad mayor es: " << edadMayor << endl;
    }
system("pause");

}



void edadMeno(){
system("cls||clear");

        if (posicion == 0) {
        cout << "No hay edades ingresadas." << endl;
    } else {

        edadMenor = edades[0];

        for (int i = 1; i < posicion; i++) {
            if (edades[i] < edadMenor){
                edadMenor = edades[i];
            }
        }

        cout << "La edad menor es: " << edadMenor << endl;
    }

    system("pause");
}


void promedio1(){
system("cls||clear");
int suma2 = 0;
        if(posicion==0){
                cout<<"No hay edades"<<endl;
        }else{
                for(int i = 0; i<posicion;i++){

        
        suma2= suma2+edades[i];
        
        }
        promedio= suma2/posicion;
   }

cout<<"El promedio de edades es de: "<<promedio<<endl;
system("pause");
}


