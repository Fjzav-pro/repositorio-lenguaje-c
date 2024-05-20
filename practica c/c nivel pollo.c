#include <stdio.h>

int main() {
    int i;
    int limite = 10;
    int numero = 1;

    if (numero > 0) {
        printf("Los números positivos menores que %d son:\n", limite);
        for (i = 1; i < limite; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
