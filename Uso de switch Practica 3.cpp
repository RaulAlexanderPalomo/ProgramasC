/*Escribir un programa en C, que realice lo siguiente:
a) Presente un men� como el siguiente:
[A] �rea de un tri�ngulo
[B] �rea de un circulo
[C] Per�metro de un cuadrado

Opci�n: __
b) Si el usuario escribe una opci�n que no est� considerada en el men�, el 
programa enviar� un mensaje al usuario similar a:
�La opci�n que escribiste no es v�lida��
�Pulse cualquier tecla para terminar el programa��, y entonces se 
terminar� el programa.
c) Si el usuario escribi� la opci�n �A� o �a�, entonces se le solicitar� al usuario los 
datos necesarios para calcular e imprimir el �rea de un tri�ngulo.
d) Si el usuario escribi� la opci�n �B� o �b�, entonces se le solicitar� al usuario los 
datos necesarios para calcular e imprimir el �rea de un c�rculo. Para este caso, 
defina el valor de Pi como una constante de 4 d�gitos decimales.
e) Si el usuario escribi� la opci�n �C� o �c�, entonces se le solicitar� al usuario los 
datos necesarios para calcular e imprimir el per�metro de un cuadrado*/
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>



#define pi 3.1416

main(){
	
	
	
	float base,altura,areatri,ladoCua,perimetro;
	double areaCir,radio;
	char let;
	setlocale(LC_CTYPE,"Spanish");
	
	printf("\nMEN�");
	printf("\n[A] �rea de un tr�angulo");
	printf("\n[B] �rea de un c�culo");
	printf("\n[C] Per�metro de un cuadrado");
	printf("\n\nOpci�n: ");
	scanf(" %c",&let);
	
	let=toupper(let);
	
	switch(let){
		case 'A': 	printf("\n\nCALCULO DEL �REA DE UN TR�ANGULO");
					printf("Dame la base del tr�angulo: ");
					scanf(" %f",&base);
					printf("Dame la altura del tr�angulo: ");
					scanf(" %f",&altura);
					areatri = base * altura / 2;
					printf("El �rea del tr�angulo de base %g y de alura %g tiene un �rea de %g",base,altura,areatri);
		break;
		
		
		
		case 'B': printf("\n\nCALCULO DEL �REA DE UN C�RCULO");
					printf("\nEscribe el radio de un c�culo: ");
					scanf(" %f",&radio);
					areaCir = pi * pow(radio,2);
					printf("El �rea del c�culo con el radio %g tiene un �rea de %g",radio,areaCir);
		break;
		
		
		
		case 'C': printf("\n\n CALCULO DEL PER�METRO DE UN CUADRADO");
					printf("\nEscribe la medida de un lado del cuadrado: ");
					scanf(" %f",ladoCua);
					perimetro = ladoCua*4;
		break;
		
		
		
		
		default: printf("\nLa opci�n que escribiste no es v�lida");
		
	}
	
	printf("Pulse cualquier tecla para continuar");
	getch();
	
	
	return 0;
	
	
	
	
	
	
	
}
