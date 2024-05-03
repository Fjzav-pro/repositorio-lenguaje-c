Proceso SumaVectores

    Definir longi, i Como Entero;
    Definir vector1, vector2, resultado Como Entero;
    
    Escribir "Ingrese la longitud de los vectores: ";
    Leer longi;
    
    Dimension vector1[100];
    Dimension vector2[100];
    Dimension resultado[100];
    
    // Solicitar al usuario ingresar los elementos del primer vector
    Escribir "Ingrese los elementos del primer vector:";
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
    
    // Calcular la suma de los vectores y almacenar el resultado en el tercer vector
    Escribir "La suma de los vectores es:";
    Para i <- 0 Hasta longi-1 Hacer
        resultado[i] <- vector1[i] + vector2[i];
        Escribir resultado[i], " ";
    FinPara
    
FinProceso

    
   