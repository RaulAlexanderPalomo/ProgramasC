#include <stdio.h>
#include <locale.h>
#include <conio.h>


main(){
	
	
	setlocale(LC_CTYPE,"Spanish");
	
	float ventaTotal;
	char nombreEmpleado[50];
	
	
	
	printf("Deme su nombre ");
	scanf(" %[^\n]",&nombreEmpleado);
	printf("�Cu�nto vendi� el empleado en todo el d�a ");
	scanf(" %f",&ventaTotal);
	
	if(ventaTotal>=7890){
		printf("\n Felicidades super� la cantidad m�nima diaria a vender");
		
		
	}
	
	printf("\nGracias por su compromiso con la tienda. Pulse cualquier tecla para terminar");
	getch();
	
	
	
	
	
	return 0;
}
