#include<stdio.h>


int suma( int num1, int num2){
    return num1 + num2;
}

int main(int argc, char const *argv[])
{
   int num1,num2;
   printf("escriba el primer numero: ");
   scanf("%d", &num1);
   printf("escribe el segundo valor: ");
   scanf("%d", &num2);
   printf("la suma de %d + %d es \n ",num1, num2);
   printf("%d", suma(num1, num2));
   return 0;
    
    
}




