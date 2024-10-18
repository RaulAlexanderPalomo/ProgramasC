/*Escribir un programa en C que realice lo siguiente:
a) Solicite al usuario escribir un número entero entre el 1 al 4.
b) De acuerdo al número introducido deberá emitir un sonido de alerta (usa la 
secuencia de escape \a para el sonido), es decir, si ingresó el número 1 deberá 
escucharse el sonido una vez, si ingresó el número 2 deberá escucharse el sonido 
dos veces, y así sucesivamente.
c) En caso de ingresar un número fuera del rango, deberá imprimir el mensaje “El 
número que ingreses deberá estar entre 1 y 4”.
d) Después de realizar el inciso b ó c, se deberá imprimir el mensaje “Pulsa cualquier 
tecla para terminar el programa…”*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>

main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	int num;
	
	printf("Dame un número entre el 1 y el 4: "),
	scanf(" %d",&num);
	
	
	
	switch(num){
		case 1: printf("\a");
		break;
		case 2: printf("\a\a");
		break;
		case 3: printf("\a\a\a");
		break;
		case 4: printf("\a\a\a\a");
		break;
		default: printf("\nEl número que ingreses debe estara entre el 1 y 4");
		break;
		
	}
	
	
	printf("\nPulse cualquier tecla para continuar");
	getch();
	
	
	return 0;
	
}
