#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	
	setlocale(LC_CTYPE,"Spanish");


	int numero,cuadrado,quinta;
	printf("\nEscribe un n�mero");
	scanf(" %d",&numero);
	
	
	
	
	cuadrado = numero*numero;
	quinta = numero*numero*numero*numero*numero;
	
	
	printf("\nEl cuadrado del n�mero %d, su cuadrado es %d, y su quinta potencia es %d",numero,cuadrado,quinta);
	
	
	
	
	printf("\nPulsa cualquier tecla para terminar");
	getch();
	return 0;
}
