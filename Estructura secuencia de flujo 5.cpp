#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>


main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	char nombreEmpleado[45];
	float horasTrabajadas,sueldoHora,impuesto,sueldoNeto;
	
	printf("\n�Cu�l es el nombre del empleado?");
	scanf(" %[^/n]",&nombreEmpleado);
	printf("\n�Cu�ntas horas trabaj� el empleado durante la semana?");
	scanf(" %f",&horasTrabajadas);
	printf("\n�Cu�nto se le paga por hora al empleado?");
	scanf(" %f",&sueldoHora);
	printf("\n�Cu�nto paga de impuestos el empleado?");
	scanf(" %f",&impuesto);
	
	
	
	if(horasTrabajadas>40){
		sueldoNeto = (40*sueldoHora) + ((horasTrabajadas-40)*2*sueldoHora) - impuesto;
	}
	else{
		sueldoNeto = horasTrabajadas*sueldoHora - impuesto;
	}
	
	printf("\nEl sueldo neto del trabajador %s es de $ %f",nombreEmpleado,sueldoNeto);
	
	
			
	printf("\nPulse cualquier tecla para terminar");
	getch();
	
	
	
	
	
	return 0;
	
	
	
	
	
	
}
