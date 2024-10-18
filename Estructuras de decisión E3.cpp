/*Escribir un programa que calcule el área de dos triángulos conociendo la base y la 
altura de cada uno e imprima el área del mayor. Si las áreas son iguales, que 
imprima la frase “Las áreas son iguales”.*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>


main(){
	setlocale(LC_CTYPE,"Spanish");
	
	float areaTri1,areaTri2,base1,altura1,altura2,base2;
	
	printf("\nDame la base del tríangulo 1  ");
	scanf(" %f",&base1);
	printf("\nDame la altura del triángulo 1  ");
	scanf(" %f",&altura1);
	
	printf("\nDame la base del tríangulo 2  ");
	scanf(" %f",&base2);
	printf("\nDame la altura del triángulo 2  ");
	scanf(" %f",&altura2);
	
	
	
	areaTri1 = base1 * altura1 / 2;
	areaTri2 = base2 * altura2 / 2;
	
	
	if(areaTri1==areaTri2){
		printf("\nLas áreas son iguales");
	}
	else{
		if(areaTri1>areaTri2){
			printf("\nEl triángulo uno es el de mayor área");
		}
		else{
			printf("\nEl area del segundo triángulo es el mayor");
		}
	}
	
	
	
	printf("\Pulse cualquier tecla para continuar");
	getch();
	
	return 0;
	
}

