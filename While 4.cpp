/*Escribir un programa en C que lea el nombre y el n�mero de horas semanales 
trabajadas para elaborar la n�mina de una compa��a que cuenta con 12 empleados, 
teniendo en cuenta lo siguiente:
a) el salario normal se calcula basado en una jornada de 40 horas semanales 
trabajadas.
b) las horas extras se pagan al triple de las horas normales.
c) las deducciones de impuestos son del 15% para el salario normal y del 7% para 
el salario extra.
Se deber� imprimir para cada empleado: nombre, horas semanales trabajadas, 
salario bruto semanal, impuestos y el salario neto semanal*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	
	int contador=1,horasExtra;
	char nombreEmpleado[40];
	float salarioBruto,salarioNeto,impuesto,pagoHora;
	
	printf("Introduce el pago por hora: ");
	scanf(" %f",&pagoHora);
	
	while(contador<=12){
		printf("Usted trabaja horas extras?");
		if()
	}
	
	
}
