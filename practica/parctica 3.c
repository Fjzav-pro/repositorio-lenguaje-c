//cuadrado de un numero par
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n, cuadrado;
    system("cls || clear");
    printf("dime un numero: ");
    scanf("%i", &n);
if (n%2 == 0)
{
    cuadrado = pow(n, 2);
    printf("el cuadrado de %i es %i ",n , cuadrado);
}else{
    printf("el numero %i no es par ", n);
}

    return 0;
}
