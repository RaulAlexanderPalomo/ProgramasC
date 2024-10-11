#include <stdio.h>
#include <conio.h>
int resta (int A, int B){
	int resultado;
	resultado=A-B;
	return(resultado);
	
}
int main(){
	int num1, num2,respuesta;
	printf("Ingrese un valor: ");
	scanf(" %d",&num1);
	printf("Dame el siguiente valor: ");
	scanf(" %d",&num2);
	respuesta=resta(num1,num2);
	printf("La respuesta de la resta es %d",respuesta);
	getch();
	
	return 0;
}
