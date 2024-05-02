#include <iostream>

using namespace std;

void evalTriangulo(int ladoA, int ladoB, int ladoC){
    if(ladoA == ladoB && ladoB == ladoC){
        cout<< "trianguulo equliatero" << endl;
    }else if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
        cout << "triangulo isoceles" << endl;
    }
}

int main()
{
    int ladoA, ladoB, ladoC;
    cout << "ingrese el lado A: ";
    cin >> ladoA;
    cout << "ingresa el lado B: ";
    cin >> ladoB;
    cout << "ingrese lado C: ";
    cin >> ladoC;
    evalTriangulo(ladoA, ladoB, ladoC);
    return 0;
}