Proceso SumaNaturales
		// Declaraci�n de variables
		Definir n, suma, i Como Entero;
		
		// Inicializaci�n de variables
		suma <- 0;
		i <- 1;
		
		// Entrada de datos
		Escribir "Introduce un n�mero natural: ";
		Leer n;
		
		// C�lculo de la suma de los n�meros naturales desde 1 hasta n
		Mientras i <= n Hacer
			suma <- suma + i;
			i <- i + 1;
		Fin Mientras
		
		// Salida de resultados
		Escribir "La suma de los numeros naturales desde 1 hasta ", n, " es: ", suma;
	Fin Algoritmo


