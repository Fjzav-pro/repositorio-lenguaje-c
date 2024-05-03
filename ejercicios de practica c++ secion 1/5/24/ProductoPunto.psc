Proceso ProductoPunto
    Definir longi, i, productPunto Como Entero;
    Definir vector1, vector2 Como Entero;
	
    Escribir "Ingrese la longitud de los vectores: ";
    Leer longi;
    Dimension vector1[100];
    Dimension vector2[100];
	
    // Solicitar al usuario ingresar los elementos del primer vector
    Escribir "Ingrese los elementos del primer vector";
    Para i <- 0 Hasta longi-1 Hacer
        Escribir "Elemento ", i+1, ": ";
        Leer vector1[i];
    FinPara
	
    // Solicitar al usuario ingresar los elementos del segundo vector
    Escribir "Ingrese los elementos del segundo vector:";
    Para i <- 0 Hasta longi-1 Hacer
        Escribir "Elemento ", i+1, ": ";
        Leer vector2[i];
    FinPara
	
    // Calcular el producto punto
    productPunto <- 0;
    Para i <- 0 Hasta longi-1 Hacer
        productPunto <- productPunto + (vector1[i] * vector2[i]);
    FinPara
	
    // Mostrar el resultado
    Escribir "El producto punto de los vectores es: ", productPunto;
FinProceso

