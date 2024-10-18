/* Escribir un programa en C que realice lo siguiente:
a) Solicite al usuario escribir una letra.
b) Convertir la letra dada a su equivalente en mayúscula.
c) Con la letra mayúscula, realizar lo siguiente:
En caso de que la letra sea A, imprimir el mensaje “Soy la primera vocal…”
En caso de que la letra sea E, imprimir el mensaje “Soy la segunda vocal…”
En caso de que la letra sea I, imprimir el mensaje “Soy la tercera vocal…”
En caso de que la letra sea O, imprimir el mensaje “Soy la cuarta vocal…”
En caso de que la letra sea U, imprimir el mensaje “Soy la última vocal…”
En cualquier otro caso, imprimir el mensaje “No soy vocal…”
d) Después de imprimir uno de los mensajes anteriores, escribir dos líneas en blanco 
e imprimir el mensaje “Pulse cualquier tecla para terminar el programa…”. Una vez 
pulsada la tecla, concluir con el programa*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

main(){
	
	char letra;
	
	printf("\nEscribe una letra ");
	scanf(" %c",&letra);
	
	letra=toupper(letra);
	
	switch(letra){
		case 'A': printf("\nSoy la primera vocal");
		break;
		
		case 'E': printf("\nSoy la segunda vocal");
		break;
		
		case 'I': printf("\nSoy la tercera vocal");
		break;
		
		case 'O' : printf("\nSoy la cuarta vocal");
		break;
		
		case 'U': printf("\nSoy la quinta vocal");
		break;
		
		default: printf("\nNo soy una vocal");
		break;
	}
	
	printf("\nPulse cualquier tecla para continuar");
	getch();
		
		
		return 0;
	}
	
	
