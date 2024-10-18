/*Escribir un programa en C, que realice lo siguiente:
� Presente un men� como el siguiente:
[A] �rea de un tri�ngulo
[B] �rea de un circulo
[C] Per�metro de un cuadrado
Opci�n: __
� Si el usuario escribe una opci�n que no est� considerada en el men�, el programa 
enviar� un mensaje al usuario similar a:
�La opci�n que escribiste no es v�lida��
�Pulse cualquier tecla para continuar��
En este caso, despu�s de pulsar cualquier tecla, se le presentar� al usuario de 
nuevo el men� principal. Esta situaci�n se realizar� tantas veces hasta que el 
usuario escriba una opci�n v�lida.
� Si el usuario escribi� la opci�n �A� o �a�, entonces se le solicitar� al usuario los datos 
necesarios para calcular e imprimir el �rea de un tri�ngulo.
� Si el usuario escribi� la opci�n �B� o �b�, entonces se le solicitar� al usuario los datos 
necesarios para calcular e imprimir el �rea de un c�rculo. Para este caso, defina el 
valor de Pi como una constante de 4 d�gitos decimales.
� Si el usuario escribi� la opci�n �C� o �c�, entonces se le solicitar� al usuario los datos 
necesarios para calcular e imprimir el per�metro de un cuadrado.
� Despu�s de finalizar las instrucciones para las opciones v�lidas, se le presentar� al 
usuario el mensaje ��Deseas regresar al men� principal (s/n)?�.
� Si el usuario escribe la letra �n�, entonces el programa termina.
� Si el usuario escribe la letra �s�, entonces se le presentar� al usuario de nuevo el 
men� principal y se tendr� que realizar todo lo descrito con anterioridad*/

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
	printf("---Men� principal---");
	printf("\n[A] �rea de un tri�ngulo  ");
	printf("\n[B] �rea de un c�rculo  ");
	printf("\n[C] Per�meto de un cuadrado  ");
	printf("\nEscriba la opci�n:  ");
	scanf(" %c",&opcion);
	
	opcion=toupper(opcion);
	
	switch(opcion){
		case 'A' :
			    	bandera=1;
			
			
					printf("\nDame la altura del tri�ngulo: ");
					scanf(" %f",&altura);
					printf("\nDame la base del tri�ngulo: ");
					scanf(" %f",&base);
					area=(base*altura)/2;
					printf("\nEl �rea del tri�ngulo con altura %f y base %f tiene un �rea de %f cent�metros cuadrados",altura,base,area);
					break;
			
		case 'B' :	
					printf("\nDame el radio del c�culo  ");
					scanf(" %f",&radio);
					area= pi*(radio*radio);
					printf("El �rea del c�rculo con radio %f es %f",radio,area);
			
					bandera=1;
					break;
			
		case 'C' :	
					printf("\nDame al valor del lado del cuadrado  ");
					scanf(" %f",&lado);
					perimetro=lado*4;
					printf("\nEl per�metro del cuadrado con lados de largo %f es %f",lado,perimetro);
					bandera=1;
					break;
		
		default: printf("\n\nLa opci�n que escribiste no es v�lida, \nPulse cualquier tecla para continuar...");
		getch();
		bandera=0;
		
		}
	
	}while(bandera==0);
	printf("\nDeseas regresar al men� principal (s/n)?");
	scanf(" %c",&respuesta);
	respuesta= tolower(respuesta);
	}while(respuesta=='s');
	printf("\nPulse cualquier tecla para continuar...");
	getch();
	
	return 0;
	
}
