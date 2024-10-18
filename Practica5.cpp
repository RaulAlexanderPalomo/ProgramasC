#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	
	setlocale(LC_CTYPE,"Spanish");


	int numero,cuadrado,quinta;
	printf("\nEscribe un número");
	scanf(" %d",&numero);
	
	
	
	
	cuadrado = numero*numero;
	quinta = numero*numero*numero*numero*numero;
	
	
	printf("\nEl cuadrado del número %d, su cuadrado es %d, y su quinta potencia es %d",numero,cuadrado,quinta);
	
	
	
	
	printf("\nPulsa cualquier tecla para terminar");
	getch();
	return 0;
}
