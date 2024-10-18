/*Escribir el correspondiente programa en C que permita imprimir el precio de un 
boleto redondo en ferrocarril, conociendo la distancia entre las dos ciudades y el 
tiempo de estancia en la ciudad destino. Si el número de días de estancia es superior 
a 10 y la distancia total a recorrer es superior a 500 km, el precio del boleto se reduce 
20%. El precio por kilómetro es de $5.5*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>


main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	int numDias;
	float distancia,costoBoleto;
	
	
	printf("\n¿Cuál es la distancia entre las dos ciudades?  ");
	scanf(" %f",&distancia);
	printf("\n¿Cuántos días permanecerá en la ciudad?  ");
	scanf(" %d",&numDias);
	
	costoBoleto = distancia*2*5.5;
	
	if(distancia>500 && numDias>10){
		costoBoleto = costoBoleto*0.8;
		
	}
	
	printf("El costo del boleto es %g",costoBoleto);
	
	printf("Pulse cualquier tecla para continuar");
	getch();
	
	
	
	return 0;
	
}
