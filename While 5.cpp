/*Leer n valores e imprimir cuántos son negativos*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	int numValor,contador=1,cuentaN=0;
	float valor;
	
	printf("\n¿Cuántos valores desea trabajar? ");
	scanf(" %d",&numValor);
	
	while(contador<=numValor){
		printf("\nIntroduce el valor %d :",contador);
		scanf(" %f",&valor);
		if(valor<0){
			cuentaN=cuentaN+1;
		}
		contador=contador+1;
	}
	printf("La cantidad de valores negativos es: %d",cuentaN);
	
	printf("\nPulse cualquier tecla para continuar");
	getch();
	
	return 0;
}
