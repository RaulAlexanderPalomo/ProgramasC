#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>


main(){

	setlocale(LC_CTYPE,"Spanish");
	float z,y,x,expresion;
	
	
	
	
	printf("Dame el valor de X");
	scanf(" %f",&x);
	printf("Dame el valor de y");
	scanf(" %f",&y);	
	printf("Dame el valor de z");
	scanf(" %f",&z);	
	
	if (z==0){
		printf("Revisa el valor de la expreción");
		
		
		
	}
	else{
		expresion = (5*x+3*y)/z;
		printf("\nEl valor de la expresión es %f",expresion);
		
	};
		
		
	printf("\nGracias por su compromiso con la tienda. Pulse cualquier tecla para terminar");
	getch();
	
	
	
	
	
	return 0;
	
	
}
