/*Raúl Alexander Palomo Pech*/
#include <stdio.h>
#include <locale.h>
int obtencion(int a, int b, int c){
		int n;
	if(a<b){
		if(a<c){
			n=a;
		}else{
			n=c;
		}
	}else{
		if(b<c){
			n=b;
		}else{
			n=c;
		}
	}
		return (n);
	
}


int main(){
	setlocale(LC_CTYPE,"Spanish");
	int num1,num2,num3,respuesta;
	
	printf("Dame el valor del número 1: ");
	scanf(" %d",&num1);
	printf("Dame el valor del número 2: ");
	scanf(" %d",&num2);
	printf("Dame el valor del número 3: ");
	scanf(" %d",&num3);
	
	respuesta=obtencion(num1,num2,num3);
	printf("El valor más pequeño de los tres números es: %d",respuesta);
	return 0;
}


