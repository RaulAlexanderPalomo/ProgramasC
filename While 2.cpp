/*Un programa que lea 10 valores e imprima la suma de los mismos*/
#include <stdio.h>
#include <conio.h>


main(){
	
	int contador=1;
	float valor,suma=0;
	
	while(contador<=10){
		printf("\nIntroduce el valor %d :",contador);
		scanf(" %f",&valor);
		
		suma=suma+valor;
		contador=contador+1;
	}
	
	printf("La suma de los 10 números es %g",suma);
	
	printf("\nPulse cualquier tecla para continuar...");
	getch();
	
	return 0;
	
	
}
