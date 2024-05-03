Proceso MultiplicacionMatrices
    Definir filas1, columnas1, filas2, columnas2, i, j, k Como Entero;
    Definir matriz1, matriz2, resultado Como Entero;
	
    // Solicitar al usuario las dimensiones de la primera matriz
    Escribir "Ingrese el numero de filas de la primera matriz: ";
    Leer filas1;
    Escribir "Ingrese el numero de columnas de la primera matriz: ";
    Leer columnas1;
	
    // Solicitar al usuario las dimensiones de la segunda matriz
    Escribir "Ingrese el numero de filas de la segunda matriz: ";
    Escribir "Ingrese el numero de columnas de la segunda matriz: ";
    Leer columnas2;
	
    // Verificar si las matrices son compatibles para la multiplicación
    Si columnas1 <> filas2 Entonces
        Escribir "Las dimensiones de las matrices no son compatibles para la multiplicacion.";
    Sino
        // Declarar las matrices
        Dimension matriz1[1000]*[1000];
        Dimension matriz2[1000]*[1000];
        Dimension resultado[1000]*[1000];
		
        // Solicitar al usuario ingresar los elementos de la primera matriz
        Escribir "Ingrese los elementos de la primera matriz:";
        Para i <- 0 Hasta filas1-1 Hacer
            Para j <- 0 Hasta columnas1-1 Hacer
                Escribir "Elemento [", i+1, "][", j+1, "]: ";
                Leer matriz1[i]*[j];
            FinPara
        FinPara
		
        // Solicitar al usuario ingresar los elementos de la segunda matriz
        Escribir "Ingrese los elementos de la segunda matriz:";
        Para i <- 0 Hasta filas2-1 Hacer
            Para j <- 0 Hasta columnas2-1 Hacer
                Escribir "Elemento [", i+1, "][", j+1, "]: ";
                Leer matriz2[i]*[j];
            FinPara
        FinPara
		
        // Realizar la multiplicación de matrices
        Para i <- 0 Hasta filas1-1 Hacer
            Para j <- 0 Hasta columnas2-1 Hacer
                resultado[i]*[j] <- 0;
                Para k <- 0 Hasta columnas1-1 Hacer;
                    resultado[i]*[j] <- resultado[i]*[j] + (matriz1[i]*[k] * matriz2[k]*[j]);
                FinPara
            FinPara
        FinPara
		
        // Mostrar la matriz resultante
        Escribir "La matriz resultante de la multiplicacion es:";
        Para i <- 0 Hasta filas1-1 Hacer
            Para j <- 0 Hasta columnas2-1 Hacer
                Escribir resultado[i][j], " ";
            FinPara
            Escribir "";
        FinPara
    FinSi
FinProceso
