Proceso NotasEstudiantes
    Definir cantidadEstudiantes, contador, nota, aprobados, reprobados Como Entero;
    Definir sumaNotas, promedio Como Real;
    
    cantidadEstudiantes <- 8;
    contador <- 1;
    aprobados <- 0;
    reprobados <- 0;
    sumaNotas <- 0;
    
    // Ciclo para ingresar las notas de los estudiantes y contar aprobados y reprobados
    Mientras contador <= cantidadEstudiantes Hacer
        Escribir "Ingrese la nota del estudiante ", contador, ": ";
        Leer nota;
        sumaNotas <- sumaNotas + nota; // Suma de todas las notas
        
        Si nota >= 70 Entonces
            aprobados <- aprobados + 1;
        Sino
            reprobados <- reprobados + 1;
        FinSi
        
        contador <- contador + 1;
    Fin Mientras
    
    // Calculando el promedio
    promedio <- sumaNotas / cantidadEstudiantes;
    
    // Mostrando la cantidad de alumnos aprobados y reprobados, y el promedio general
    Escribir "Cantidad de alumnos aprobados: ", aprobados;
    Escribir "Cantidad de alumnos reprobados: ", reprobados;
    Escribir "Promedio general del grupo: ", promedio;
FinProceso
