/*Escribir un programa que imprima la nómina semanal para una compañía de 12 empleados, teniendo en cuenta lo siguiente:
a)     El sueldo por hora es un valor constante e igual a $60.5.

b)     El salario normal se calcula basado en una jornada de 40 horas semanales.

c)     Las horas extras se pagan al doble de las horas normales.

d)     La deducción de impuestos es del 5% para el salario normal y del 3% para el salario extra.

La nómina debe contener el nombre del empleado, el número de horas semanales trabajadas,
 el salario bruto, la cantidad total de impuesto a pagar y el salario neto.

 */
 
 
#include <stdio.h>
#include <conio.h>
#include <locale.h>


main(){
	
	
	
	setlocale(LC_CTYPE,"Spanish");
	
	char nombreEmpleado[40];
	int contEmpleado,horasExtra,horasTrabajo;
	float salarioNormal,salarioImp,impuestos;
	contEmpleado=1;
	
	
	
	
	do{
		printf("\nEscriba su nombre por favor: ");
		scanf(" %s",&nombreEmpleado);
		printf("\nEscriba el total de horas trabajadas: ");
		scanf(" %d",&horasTrabajo);
		
		if(horasTrabajo>40){
			horasExtra=horasTrabajo;
			horasExtra=horasExtra-40;
			
			salarioNormal=2420+(horasExtra*121);
			impuestos=(salarioNormal*0.05)+(horasExtra*121*0.03);
			salarioImp=salarioNormal-impuestos;
		}else{
			salarioNormal=horasTrabajo*60.5;
			impuestos=salarioNormal*0.05;
			salarioImp=salarioNormal-impuestos;
		}
		printf("\nBuen día %s",nombreEmpleado);
		printf("\nLas horas totales trabajadas son %d",horasTrabajo);
		printf("\nSu salario bruto es: %f",salarioNormal);
		printf("\nSus impuestos son %f",impuestos);
		printf("\nSu salario con impuestos es: %f",salarioImp);
		contEmpleado++;
		
	}while(contEmpleado<=12);
	printf("\nPulse cualquier tecla para continuar...");
	getch();
	
	return 0;

}

