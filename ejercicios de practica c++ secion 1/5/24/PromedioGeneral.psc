Proceso PromedioGeneral
    Definir nota, suma, promedio,i Como Real;
    suma <- 0;
	
    Escribir "Ingrese las notas de los 10 estudiantes:";
    Para i <- 1 Hasta 10 Hacer
        Escribir "Nota del estudiante ", i, ": ";
        Leer nota;
        suma <- suma + nota;
    FinPara
	
    promedio <- suma / 10;
	
    Escribir "El promedio general de la seccion es: ", promedio;
FinProceso

