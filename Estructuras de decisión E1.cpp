/*Escribir el programa correspondiente en C
que al recibir como dato un n�mero entero,
determine e imprima si es par, impar o nulo.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	int num;
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nIngrese un n�mero entero: ");
	scanf(" %d",&num);
	
	
	if(num==0){
		printf("\nEl numero ingresado es un n�mero nulo");
	}
	else{
		if(num%2==0){
			printf("\nEs un n�mero par");
		}
		else printf("\nEl numero es impar");
	}
	
	
	
	
	
	
	
	
	return 0;
	
	
}
