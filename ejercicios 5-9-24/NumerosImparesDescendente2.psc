Proceso NumerosImparesDescendente
    Definir num Como Entero;
    
    num <- 99 ;// Comenzamos desde 99, el mayor n�mero impar dentro de 1 y 100
	
    Escribir "Numeros impares en orden descendente entre 1 y 100:";
    
    Mientras num >= 1 Hacer
        Escribir num;
        num <- num - 2 ;// Restamos 2 para obtener el siguiente n�mero impar
    Fin Mientras
FinProceso
