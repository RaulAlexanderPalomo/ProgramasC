/*En algunas oficinas del gobierno del estado XYZ se pagan horas extras a los 
trabajadores, adem�s del salario correspondiente. Escribir el programa en C que 
permita calcular e imprimir la cantidad a pagar a un trabajador tomando en cuenta 
su salario base y las horas extras trabajadas.
Cada trabajador puede tener como m�ximo 30 horas extras, si tienen m�s, s�lo se 
le pagar� las primeras 30 horas. Los trabajadores con categor�a 4 � mayor a 4 no 
pueden recibir el beneficio de las horas extras.
El salario base es el mismo para todos los trabajadores, ya que adem�s se 
proporciona a los trabajadores otros incentivos (no considerados en este problema) 
que marcan la diferencia en los salarios de acuerdo a la categor�a del trabajador*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>


main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	int sueldo,catTrab,horasExt;
	float sueldoFin,pagoExt;
	
	printf("�Cu�l es la categor�a del trabajador?");
	scanff(" %d",%catTrab);
	printf("�Cu�l es el sueldo del trabajador?");
	scanf(" %f",&sueldo);
	printf("�Cu�ntas horas extras se trabajaron?")
	scanf(" %d",&horasExt);
	
	if(horasExt>30)
	if(catTrab=1){
		pagoExt = horasExt*40
		
		
	}
	
	
	
	
	
	
	
	
	
}

