#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, *puntero, i = 0;
    puntero = &num;
    cout << "dime un numero: ";
    scanf("%d", &num);

    while(i <= 12){
        printf("%i * %i = %i\n", i, *puntero, i* *puntero);
        i++;
    }


    

    return 0;
}

