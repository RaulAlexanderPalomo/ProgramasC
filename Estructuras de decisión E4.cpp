/*Escribir el programa correspondiente en C que al recibir como datos las ventas de 
tres vendedores de una tienda de discos, escriba las mismas en forma descendente. 
Considere que todas las ventas son diferentes y no utilice operadores l�gicos para 
agrupar las condiciones*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>


main(){
	
	setlocale(LC_CTYPE,"Spanish");
	float radio;
	double y,x,distancia;
	
	
	printf("\nDame el radio del c�culo: ");
	scanf(" %f",&radio);
	printf("\n�Cu�l es el valor de la absisa del punto? ");
	scanf(" %lf",&x);
	printf("\n�Cu�l es el valor de la ordenada al punto ");	
	scanf(" %lf",&y);
	
	distancia= sqrt(pow(x,2) + pow(y,2));
	
	
	if(radio<distancia){
		printf("\nEl punto est� fuera del c�culo ");
	}
	else{
		if(radio==distancia){
			printf("\nEl punto est� sobre el c�culo");
		}
		else{
			printf("El �rea est� dentro del c�rculo");
		}
	}
	
	
	printf("\nPulse cualquier tecla para continuar");
	getch();
	
	
	
		
	return 0;
}
