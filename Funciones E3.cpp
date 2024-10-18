#include <stdio.h>
#include <locale.h>
int multiplicar(int num1, int num2){
	
	int resultado;
	
	resultado=num1*num2;
	
	return resultado;
}

main(){
	setlocale(LC_CTYPE,"Spanish");
	int num1,num2,resultado,  elevacion;
	scanf(" %d",&num1);
	scanf(" %d",&num2);
	
	resultado = multiplicar(num1, num2);
	
	
	
	printf("\nEl resultado de la multiplicación es: %d",resultado);
		

	
	elevacion = resultado * resultado;
	printf("\nEl resultado es %d", elevacion);
	return 0;
}
