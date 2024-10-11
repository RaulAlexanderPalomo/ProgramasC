/*Raúl Alexander Palomo Pech*/
#include <stdio.h>
#include <locale.h>
void calculo(int a){
	int cont,edadCliente,cont2;
	cont=0;
	cont2=0;
	do{
	printf("Dame la edad del cliente: ");
	scanf(" %d",&edadCliente);
	if(edadCliente<=40&&edadCliente>=25){
		cont=cont+1;
	}
	cont2=cont2+1;
	}while(cont2<a);
	printf("\nLa cantidad de clientes en el rango de 25 a 40 años son: %d",cont);
}
int main(){
	setlocale(LC_CTYPE,"Spanish");
	int z;
	do{
		printf("\nDame la cantidad de clientes, recuerda que deben ser mayores que cero: ");
		scanf(" %d",&z);
		
		
	}while(z<=0);
	calculo(z);
	return 0;
}

