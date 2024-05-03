Proceso Calificaciones
    Definir nota, suma, promedio, aprobados, reprobados Como Real;
    Definir contador Como Entero;
    suma <- 0;
    aprobados <- 0; 
    reprobados <- 0;
	
    Escribir "Ingrese las notas de los 8 estudiantes:";
    Para contador <- 1 Hasta 8 Hacer
        Escribir "Nota del estudiante ", contador, ": ";
        Leer nota;
        suma <- suma + nota;
        Si nota >= 70 Entonces
            aprobados <- aprobados + 1;
        Sino
            reprobados <- reprobados + 1;
        FinSi
    FinPara
	
    promedio <- suma / 8;
	
    Escribir "Cantidad de alumnos aprobados: ", aprobados;
    Escribir "Cantidad de alumnos reprobados: ", reprobados;
    Escribir "Promedio general del grupo: ", promedio;
    Escribir "Nota mínima para aprobar: 70";
FinProceso
