#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	
	float superficie,altura,base;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe la base del tríangulo:");
	scanf(" %f",&base);
	printf("\nEscribe la altura del triángulo:");
	scanf(" %f",&altura);
	superficie = (base*altura)/2;
	
	
	printf("\nLa superficie del tríangulo con base %f, altura %d, tiene como superficie %f",base,altura,superficie);
	
	
	printf("\nPulsa cualquier tecla para terminar");
	getch();
	
	
	
	
	
	
	
	
	
	
}
