/*Escribir el programa correspondiente en C
que al recibir como datos los tres lados de un
triángulo, determine si éste es equilátero,
isósceles o escaleno*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	float ladoUno,ladoDos,ladoTres;
	
	printf("\n¿Cuánto mide el lado uno del triángulo?");
	scanf(" %f",&ladoUno);
	printf("\n¿Cuánto mide el lado dos del triángulo?");
	scanf(" %f",&ladoDos);
	printf("\n¿Cuánto mide el lado tres del triángulo?");
	scanf(" %f",&ladoTres);
	
	if(ladoUno==ladoDos){
		if(ladoUno==ladoTres){
			printf("Es un triángulo equilátero");
		}
		else{
			printf("Es un triángulo isósceles");
		}
		
	}
	else{
		if(ladoUno==ladoTres){
		printf("\nEs un triángulo isósceles");
		}
		else{
			if(ladoDos==ladoTres){
			printf("Es un triangulo isósceles");
			}
			else{
				printf("Es un triángulo escaleno");
			}
			
		
		}
		
	}
	printf("Pulse cualquier tecla para continuar");
	getch();
	
	
	return 0;
	
}
