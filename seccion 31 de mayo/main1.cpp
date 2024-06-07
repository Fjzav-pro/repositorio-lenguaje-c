#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int variable;
    int *puntero;

    puntero = &variable;

    variable = 5;

    printf("variable: %d\n", variable);
    printf("puntero: %d\n", *puntero);

    *puntero = 8;

    printf("variable: %d\n", variable);
    printf("puntero: %d\n", *puntero);


    return 0;
}
