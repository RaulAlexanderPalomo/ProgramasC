#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
int raiz(double num1, double num2);

double raiz(double num1, double num2){
	
	double operacion;
	
	operacion = sqrt(num1)+sqrt(num2);
	
	return operacion;
	
}


main(){
	setlocale(LC_CTYPE,"Spanish");
	double num1,num2,resultado;
	
	
	printf("Dame el valor del primer número entero: ");
	scanf(" %lf",&num1);
	printf("Same el valor del segundo número entero: ");
	scanf(" %lf",&num2);
	
	resultado = raiz(num1,num2);
	
	printf("El valor obtenido es igual a %g",resultado);
	printf("Pulse cualquier tecla para continuar...");
	getch();
	
	return 0;
}

