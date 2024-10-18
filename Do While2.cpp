/*Escribir un programa en C que lea diez valores reales, que los sume e imprima la suma.*/
#include <stdio.h>
#include <conio.h>

main(){
	
	int contador=1;
	float num,suma=0;
	
	do{
		printf("Dame el valor %d: ",contador);
		
		scanf(" %f",&num);
		suma=suma+num;
		
		contador++;
		
	} while(contador<=10);
	
	printf("\nEl valor de la suma de los 10 valores reales es %g",suma);
	printf("\nPulse cualquier tecla para continuar...");
	
	return 0;
	
}


