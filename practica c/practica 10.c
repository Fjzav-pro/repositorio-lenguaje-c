#include<stdio.h>
int main(int argc, char const *argv[])
{
    float num[10];
    num[0] = 1.2434;
    num[1] = 3.744;
    num[2] = 56.8457;
    num[3] = 9364.8247;
    num[4] = 1.83;
    num[5] = 10.376;
    num[6] = 9.4;
    num[7] = 113.35;
    num[8] = 1.94;
    num[9] = 0.43;
    float suma = num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8] + num[9];

    printf("suma \n");
    printf("resultado %.2f\n", suma);

    return 0;
}
