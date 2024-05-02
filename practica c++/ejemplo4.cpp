#include <iostream>
using namespace std;

float calcularMontoSinImpuesto(int km) {
    float monto = 30; // Monto base
    if (km > 500 && km <= 1000) {
        monto += 30 + (km - 500) * 0.05; // Monto adicional para 501-1000 KM
    } else if (km > 1000) {
        monto += 30 + 500 * 0.05 + (km - 1000) * 0.08; // Monto adicional para más de 1000 KM
    }
    return monto;
}

float calcularMontoConImpuesto(float montoSinImpuesto) {
    return montoSinImpuesto * 1.15; // Aplicar el 15% de impuesto
}

int main() {
    int km;
    cout << "Ingrese la distancia recorrida en KM: ";
    cin >> km;

    float montoSinImpuesto = calcularMontoSinImpuesto(km);
    float montoConImpuesto = calcularMontoConImpuesto(montoSinImpuesto);

    cout << "Monto a pagar sin impuesto: $" << montoSinImpuesto << endl;
    cout << "Monto a pagar con impuesto (IVA incluido): $" << montoConImpuesto << endl;

    return 0;
}
