/* Escribir el correspondiente programa en C que al recibir como dato un número 
entero Y, calcule el resultado de la siguiente función e imprima los valores de Y, y 
el resultado de la función.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>


main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	float y,func;
	
	printf("\nDame el valor del número entero Y");
	scanf(" %f",&y);
	
	
	if( 0<=y && y<=11  ){
		func = y/4-y;
		
	}
	else{
		if( 11<y && y<=25){
			func = y*y*y-12;
			
		}
		else{
			if(25<y && y<=50){
				func = y*y + y*y*y - 18;
					
			}
			else{
				func = 0;
			}
		}
	}
	
	printf("\nEl valor de la funcion es %f",func);
	
	
	printf("\nPulse cualquier tecla para continuar");
	
	getch();
	
	return 0;
	
	
}


