Proceso SumaCuadrados
    Definir num, suma Como Entero;
    
    num <- 1;
    suma <- 0;
    
    Mientras num <= 100 Hacer
        suma <- suma + num * num;
        num <- num + 1;
    Fin Mientras
    
    Escribir "La suma de los cuadrados de los numeros entre 1 y 100 es: ", suma;
FinProceso
