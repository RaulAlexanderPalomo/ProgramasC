/*Escribir el programa correspondiente en C
que al recibir como datos los tres lados de un
tri�ngulo, determine si �ste es equil�tero,
is�sceles o escaleno*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	float ladoUno,ladoDos,ladoTres;
	
	printf("\n�Cu�nto mide el lado uno del tri�ngulo?");
	scanf(" %f",&ladoUno);
	printf("\n�Cu�nto mide el lado dos del tri�ngulo?");
	scanf(" %f",&ladoDos);
	printf("\n�Cu�nto mide el lado tres del tri�ngulo?");
	scanf(" %f",&ladoTres);
	
	if(ladoUno==ladoDos){
		if(ladoUno==ladoTres){
			printf("Es un tri�ngulo equil�tero");
		}
		else{
			printf("Es un tri�ngulo is�sceles");
		}
		
	}
	else{
		if(ladoUno==ladoTres){
		printf("\nEs un tri�ngulo is�sceles");
		}
		else{
			if(ladoDos==ladoTres){
			printf("Es un triangulo is�sceles");
			}
			else{
				printf("Es un tri�ngulo escaleno");
			}
			
		
		}
		
	}
	printf("Pulse cualquier tecla para continuar");
	getch();
	
	
	return 0;
	
}
