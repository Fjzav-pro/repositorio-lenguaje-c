#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char nombres[60];
    char apellidos[60];

    printf("dime tu nombre completo: ");
    scanf(" %[^\n]", nombres);
    printf("dime tus apellidos: ");
    scanf(" %[^\n]", apellidos);
    printf("tu nombre completo es %s %s", nombres, apellidos);
    
    return 0;
}
