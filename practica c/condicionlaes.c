// > mayor //
// < menor //
// >= o <= mayor o igual , menor o igual //
// == igual que //
// != distinto //
// if , else , else if //
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1 ,num2 , num3;
    int mayor;
    printf ("escriba el primer numero: ");
    scanf ("%i", &num1);
    printf ("escriba el segundo numero: ");
    scanf ("%i", &num2);
    printf ("escriba el tercer numero: ");
    scanf ("%i", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            mayor = num1;
        }
        else{
            mayor = num3;
        }
    }
    else{
        if (num2 > num3){
            mayor = num2;
        }
        else{
            mayor = num3;
        }
    }
    printf("%i es el mayor", mayor);

    
    
    
    return 0;
}
