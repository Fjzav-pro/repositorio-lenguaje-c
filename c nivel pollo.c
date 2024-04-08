#include <stdio.h>
int main(int argc, char const *argv[])
{
    //estadisticas_de_dano_base_mas_un_300%_de_dano_extra//
    int cortante = 56, perforacion = 100, impacto = 243, dano_base = cortante + perforacion + impacto;
    float aumento_de_dano = dano_base * 300 / 100 , Dano_total = dano_base + aumento_de_dano;

    printf("Dano base: %d \n", dano_base);
    printf("dano aumentado: %f \n", Dano_total);
    return 0;
}
