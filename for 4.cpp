/*Escribe el programa que lea n valores y que cuente e imprima cu�ntos son negativos*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>


main(){
	
	
	setlocale(LC_CTYPE,"Spanish");
	
	int num,valor,cont,i;
	
	printf("\nDame el valor de la cantidad de n�meros que se van a usar ");
	scanf(" %d",&num);
	
	for(i=num; i>0; --i){
		
		printf("\nDame el valor %d : ",i);
		scanf(" %d",&valor);
		if(valor<0){
			printf("\nEl n�mero %d es negativo",valor);
			cont=cont+1;
					}
		
		
		
	}
	printf("\nLa cantidad de n�meros negativos escritos son: %d",cont);
	
	printf("\nPulse cualquier tecla para continuar");
	getch();
	
	return 0;
}




