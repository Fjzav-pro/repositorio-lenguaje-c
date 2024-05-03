Proceso NumerosImparesDescendentes
    Definir i como Entero;
	
    Escribir "Los numeros impares en orden descendente entre 1 y 100 son:";
    
    Para i <- 100 Hasta 1 Con Paso -1 Hacer
        Si i MOD 2 <> 0 Entonces
            Escribir i, " ";
        FinSi
    FinPara
	
FinProceso

