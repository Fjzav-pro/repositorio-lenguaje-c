#include <stdio.h>
int main(int argc, char const *argv[])
{
    float total ,descuento = 0.20;
    float compra;

    printf("escribe el precio de la compra...");
    scanf("%f", &compra);
    total = compra - (compra * descuento);

    printf("el precio con descuento es...%.2f", total);

    return 0;
}