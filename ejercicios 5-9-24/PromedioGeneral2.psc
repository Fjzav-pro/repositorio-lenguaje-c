Proceso PromedioGeneral
    Definir cantidadEstudiantes, contador Como Entero;
    Definir nota, sumaNotas, promedio Como Real;
    
    cantidadEstudiantes <- 10;
    contador <- 1;
    sumaNotas <- 0;
    
    // Ciclo para ingresar las notas de los estudiantes
    Mientras contador <= cantidadEstudiantes Hacer;
        Escribir "Ingrese la nota del estudiante ", contador, ": ";
        Leer nota;
        sumaNotas <- sumaNotas + nota; // Suma de todas las notas
        contador <- contador + 1;
    Fin Mientras
    
    // Calculando el promedio
    promedio <- sumaNotas / cantidadEstudiantes;
    
    // Mostrando el promedio general
    Escribir "El promedio general de la seccion es: ", promedio;
FinProceso
