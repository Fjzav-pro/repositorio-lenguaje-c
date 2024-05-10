Proceso SumaNaturales
		// Declaración de variables
		Definir n, suma, i Como Entero;
		
		// Inicialización de variables
		suma <- 0;
		i <- 1;
		
		// Entrada de datos
		Escribir "Introduce un número natural: ";
		Leer n;
		
		// Cálculo de la suma de los números naturales desde 1 hasta n
		Mientras i <= n Hacer
			suma <- suma + i;
			i <- i + 1;
		Fin Mientras
		
		// Salida de resultados
		Escribir "La suma de los numeros naturales desde 1 hasta ", n, " es: ", suma;
	Fin Algoritmo


