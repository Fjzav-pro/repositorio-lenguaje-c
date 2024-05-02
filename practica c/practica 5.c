//leer una frase y decir cuantas letras tien
//mostrarla en mayusculas
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char frase[100];
    int cantidad;
    printf("dime una frase: ");
    scanf(" %[^\n]",frase);
    cantidad = strlen(frase);
    printf("la frase %s tiene %i", frase, cantidad);
    return 0;
}
