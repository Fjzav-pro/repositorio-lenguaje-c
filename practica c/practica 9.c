#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5];
    numbers[0]=3;
    numbers[1]=5;
    numbers[2]=4;
    numbers[3]=6;
    numbers[4]=1;
    printf("elemento #1 %d \n",numbers[0]);
    printf("elemento #2 %d \n",numbers[1]);
    printf("elemento #3 %d \n",numbers[2]);
    printf("elemento #4 %d \n",numbers[3]);
    printf("elemento #5 %d \n",numbers[4]);

    printf("suma\n");
    int sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    printf("la suma es %d\n", sum);
    return 0;
}
