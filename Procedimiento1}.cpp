#include <stdio.h>
#include <conio.h>
#include <locale.h>

int resta (int A, int B){
	int resultado;
	resultado=A-B;
	return(resultado);
	
}

void imprimir_resultado(int z){
	printf("La respuesta de la operación es : %d",z);
}

int main(){
	setlocale(LC_CTYPE,"Spanish");
	int num1, num2,respuesta;
	printf("Ingrese un valor: ");
	scanf(" %d",&num1);
	printf("Dame el siguiente valor: ");
	scanf(" %d",&num2);
	respuesta=resta(num1,num2);
	imprimir_resultado(respuesta);
	getch();
	
	return 0;
}
