/*Ra�l Alexander Palomo Pech*/
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
	
	printf("Dame el valor del n�mero 1: ");
	scanf(" %d",&num1);
	printf("Dame el valor del n�mero 2: ");
	scanf(" %d",&num2);
	printf("Dame el valor del n�mero 3: ");
	scanf(" %d",&num3);
	
	respuesta=obtencion(num1,num2,num3);
	printf("El valor m�s peque�o de los tres n�meros es: %d",respuesta);
	return 0;
}


