#include<stdio.h>
int main(int argc, char const *argv[])
{
    float numbers[6];
    numbers[0]=12;
    numbers[1]=1.2;
    numbers[2]=2.3;
    numbers[3]=3.74897;
    numbers[4]=42.8;
    numbers[5]=638.894;
    printf("el elemto es #1 %.2f\n", numbers[0]);
    printf("el elemto es #2 %.2f\n", numbers[1]);
    printf("el elemto es #3 %.2f\n", numbers[2]);
    printf("el elemto es #3 %.2f\n", numbers[3]);
    printf("el elemto es #4 %.2f\n", numbers[4]);
    printf("el elemto es #5 %.2f\n", numbers[5]);
    return 0;
}
