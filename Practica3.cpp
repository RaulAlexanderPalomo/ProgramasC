#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	
	float superficie,altura,base;
	
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nEscribe la base del tr�angulo:");
	scanf(" %f",&base);
	printf("\nEscribe la altura del tri�ngulo:");
	scanf(" %f",&altura);
	superficie = (base*altura)/2;
	
	
	printf("\nLa superficie del tr�angulo con base %f, altura %d, tiene como superficie %f",base,altura,superficie);
	
	
	printf("\nPulsa cualquier tecla para terminar");
	getch();
	
	
	
	
	
	
	
	
	
	
}
