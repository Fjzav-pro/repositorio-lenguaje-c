#include<stdio.h>
#include<math.h>

// raiz cuadrada de un numero
int main(int argc, char const *argv[])
{
    float n, raiz;
    printf("ingrese un numero: ");
    scanf("%f",&n);
    raiz = sqrt(n);
    printf("la raiz cuadrada de %.2f es %.2f" , n , raiz);
    return 0;
}
