#include <stdio.h>
#include <locale.h>
#include <conio.h>


main(){
	
	
	setlocale(LC_CTYPE,"Spanish");
	
	float ventaTotal;
	char nombreEmpleado[50];
	
	
	
	printf("Deme su nombre ");
	scanf(" %[^\n]",&nombreEmpleado);
	printf("¿Cuánto vendió el empleado en todo el día ");
	scanf(" %f",&ventaTotal);
	
	if(ventaTotal>=7890){
		printf("\n Felicidades superó la cantidad mínima diaria a vender");
		
		
	}
	
	printf("\nGracias por su compromiso con la tienda. Pulse cualquier tecla para terminar");
	getch();
	
	
	
	
	
	return 0;
}
