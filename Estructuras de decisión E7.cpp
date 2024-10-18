/*En algunas oficinas del gobierno del estado XYZ se pagan horas extras a los 
trabajadores, además del salario correspondiente. Escribir el programa en C que 
permita calcular e imprimir la cantidad a pagar a un trabajador tomando en cuenta 
su salario base y las horas extras trabajadas.
Cada trabajador puede tener como máximo 30 horas extras, si tienen más, sólo se 
le pagará las primeras 30 horas. Los trabajadores con categoría 4 ó mayor a 4 no 
pueden recibir el beneficio de las horas extras.
El salario base es el mismo para todos los trabajadores, ya que además se 
proporciona a los trabajadores otros incentivos (no considerados en este problema) 
que marcan la diferencia en los salarios de acuerdo a la categoría del trabajador*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>


main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	int sueldo,catTrab,horasExt;
	float sueldoFin,pagoExt;
	
	printf("¿Cuál es la categoría del trabajador?");
	scanff(" %d",%catTrab);
	printf("¿Cuál es el sueldo del trabajador?");
	scanf(" %f",&sueldo);
	printf("¿Cuántas horas extras se trabajaron?")
	scanf(" %d",&horasExt);
	
	if(horasExt>30)
	if(catTrab=1){
		pagoExt = horasExt*40
		
		
	}
	
	
	
	
	
	
	
	
	
}

