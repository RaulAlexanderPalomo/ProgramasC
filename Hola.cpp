/* Este es mi primer programa escrito en C. Es el clásico Hola mundo. Mi nombre es Raúl Aalexander Palomo Pech*/
#include <stdio.h> /*Este nos permite hacer procesos de entrada y salida*/
#include <conio.h> /*Con ayuda de esta linea incluimos la librerría para poder ejecutar el getch*/
#include <locale.h> /*Para las letras que no se encuentran en el inglés*/

main(){  /*Esta es la función que se ejecutará primero*/
	setlocale(LC_CTYPE,"Spanish");

	printf("Hola mundo. \n"); /*Con esta linea enviamos el mensaje deseado*/
	
	printf("Saludos y buenos días \n");
	
	printf("Pulse cualquier tecla para terminar..."); /*Con ello enviamos un mensaje para interactuar con el usuario y sea posible cerrar el programa con la función siguiente*/
	
	getch(); /*Esta función nos permite captar la tecla que presiona el usuario*/
	
	return 0;
}
