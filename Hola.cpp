/* Este es mi primer programa escrito en C. Es el cl�sico Hola mundo. Mi nombre es Ra�l Aalexander Palomo Pech*/
#include <stdio.h> /*Este nos permite hacer procesos de entrada y salida*/
#include <conio.h> /*Con ayuda de esta linea incluimos la librerr�a para poder ejecutar el getch*/
#include <locale.h> /*Para las letras que no se encuentran en el ingl�s*/

main(){  /*Esta es la funci�n que se ejecutar� primero*/
	setlocale(LC_CTYPE,"Spanish");

	printf("Hola mundo. \n"); /*Con esta linea enviamos el mensaje deseado*/
	
	printf("Saludos y buenos d�as \n");
	
	printf("Pulse cualquier tecla para terminar..."); /*Con ello enviamos un mensaje para interactuar con el usuario y sea posible cerrar el programa con la funci�n siguiente*/
	
	getch(); /*Esta funci�n nos permite captar la tecla que presiona el usuario*/
	
	return 0;
}
