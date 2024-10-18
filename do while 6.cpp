/*Escribir un programa en C, que realice lo siguiente:
• Presente un menú como el siguiente:
[A] Área de un triángulo
[B] Área de un circulo
[C] Perímetro de un cuadrado
Opción: __
• Si el usuario escribe una opción que no está considerada en el menú, el programa 
enviará un mensaje al usuario similar a:
“La opción que escribiste no es válida…”
“Pulse cualquier tecla para continuar…”
En este caso, después de pulsar cualquier tecla, se le presentará al usuario de 
nuevo el menú principal. Esta situación se realizará tantas veces hasta que el 
usuario escriba una opción válida.
• Si el usuario escribió la opción “A” o “a”, entonces se le solicitará al usuario los datos 
necesarios para calcular e imprimir el área de un triángulo.
• Si el usuario escribió la opción “B” o “b”, entonces se le solicitará al usuario los datos 
necesarios para calcular e imprimir el área de un círculo. Para este caso, defina el 
valor de Pi como una constante de 4 dígitos decimales.
• Si el usuario escribió la opción “C” o “c”, entonces se le solicitará al usuario los datos 
necesarios para calcular e imprimir el perímetro de un cuadrado.
• Después de finalizar las instrucciones para las opciones válidas, se le presentará al 
usuario el mensaje “¿Deseas regresar al menú principal (s/n)?”.
• Si el usuario escribe la letra “n”, entonces el programa termina.
• Si el usuario escribe la letra “s”, entonces se le presentará al usuario de nuevo el 
menú principal y se tendrá que realizar todo lo descrito con anterioridad*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>


#define pi 3.1416


main(){
	
	char opcion;
	char respuesta;
	int bandera;
	float base,altura,area,lado,radio,perimetro;
	setlocale(LC_CTYPE,"Spanish");
	do{
	do{
	printf("---Menú principal---");
	printf("\n[A] Área de un triángulo  ");
	printf("\n[B] Área de un círculo  ");
	printf("\n[C] Perímeto de un cuadrado  ");
	printf("\nEscriba la opción:  ");
	scanf(" %c",&opcion);
	
	opcion=toupper(opcion);
	
	switch(opcion){
		case 'A' :
			    	bandera=1;
			
			
					printf("\nDame la altura del triángulo: ");
					scanf(" %f",&altura);
					printf("\nDame la base del triángulo: ");
					scanf(" %f",&base);
					area=(base*altura)/2;
					printf("\nEl área del triángulo con altura %f y base %f tiene un área de %f centímetros cuadrados",altura,base,area);
					break;
			
		case 'B' :	
					printf("\nDame el radio del cículo  ");
					scanf(" %f",&radio);
					area= pi*(radio*radio);
					printf("El área del círculo con radio %f es %f",radio,area);
			
					bandera=1;
					break;
			
		case 'C' :	
					printf("\nDame al valor del lado del cuadrado  ");
					scanf(" %f",&lado);
					perimetro=lado*4;
					printf("\nEl perímetro del cuadrado con lados de largo %f es %f",lado,perimetro);
					bandera=1;
					break;
		
		default: printf("\n\nLa opción que escribiste no es válida, \nPulse cualquier tecla para continuar...");
		getch();
		bandera=0;
		
		}
	
	}while(bandera==0);
	printf("\nDeseas regresar al menú principal (s/n)?");
	scanf(" %c",&respuesta);
	respuesta= tolower(respuesta);
	}while(respuesta=='s');
	printf("\nPulse cualquier tecla para continuar...");
	getch();
	
	return 0;
	
}
