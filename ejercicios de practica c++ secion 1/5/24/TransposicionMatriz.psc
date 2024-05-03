Proceso TransposicionMatriz
    Definir filas, columnas, i, j Como Entero;
    Definir matriz, transpuesta Como Entero;
	
    // Solicitar al usuario las dimensiones de la matriz
    Escribir "Ingrese el numero de filas de la matriz: ";
    Leer filas;
    Escribir "Ingrese el numero de columnas de la matriz: ";
    Leer columnas;
	
    // Declarar la matriz
    Dimension matriz[1000]+[1000];
	
    // Solicitar al usuario ingresar los elementos de la matriz
    Escribir "Ingrese los elementos de la matriz:";
    Para i <- 0 Hasta filas-1 Hacer
        Para j <- 0 Hasta columnas-1 Hacer
            Escribir "Elemento [", i + 1, "][", j + 1, "]: ";
            Leer matriz[i]+[j];
        FinPara
    FinPara
	
    // Calcular la transposición de la matriz
    Dimension transpuesta[1000]+[1000];
    Para i <- 0 Hasta filas-1 Hacer
        Para j <- 0 Hasta columnas-1 Hacer
            transpuesta[1][2] <- matriz[1][2];
        FinPara
    FinPara
	
    // Mostrar la matriz transpuesta
    Escribir "La matriz transpuesta es:";
    Para i <- 0 Hasta columnas-1 Hacer
        Para j <- 0 Hasta filas-1 Hacer
            Escribir transpuesta[i]+[j], " ";
        FinPara
        Escribir "";
    FinPara
	
FinProceso
