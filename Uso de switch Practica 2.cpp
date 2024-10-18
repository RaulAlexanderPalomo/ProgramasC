/*Escribir un programa en C que realice lo siguiente:
a) Solicite al usuario escribir un n�mero entero entre el 1 al 4.
b) De acuerdo al n�mero introducido deber� emitir un sonido de alerta (usa la 
secuencia de escape \a para el sonido), es decir, si ingres� el n�mero 1 deber� 
escucharse el sonido una vez, si ingres� el n�mero 2 deber� escucharse el sonido 
dos veces, y as� sucesivamente.
c) En caso de ingresar un n�mero fuera del rango, deber� imprimir el mensaje �El 
n�mero que ingreses deber� estar entre 1 y 4�.
d) Despu�s de realizar el inciso b � c, se deber� imprimir el mensaje �Pulsa cualquier 
tecla para terminar el programa��*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>

main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	int num;
	
	printf("Dame un n�mero entre el 1 y el 4: "),
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
		default: printf("\nEl n�mero que ingreses debe estara entre el 1 y 4");
		break;
		
	}
	
	
	printf("\nPulse cualquier tecla para continuar");
	getch();
	
	
	return 0;
	
}
