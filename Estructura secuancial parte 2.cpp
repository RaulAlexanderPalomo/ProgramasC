#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


main(){
	
	double num;
	double cuadrado,quinta;
	setlocale(LC_CTPYPE,"Spanish")
	
	printf("Escribe un número entero");
	scanf(" %lf",&num);
	cuadrado=pow(num,2);
	quinta=pow(quinta,5);
	printf("El cuadrado del numero es %lf y la quinta potencia es %lf",cuadrado,quinta);
	
	
	
	
	
	
	
	
	printf("\nPulse cualquier tecla para terminar");
	getch();
		
	
	return 0;
}
