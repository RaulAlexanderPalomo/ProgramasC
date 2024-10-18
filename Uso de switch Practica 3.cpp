/*Escribir un programa en C, que realice lo siguiente:
a) Presente un menú como el siguiente:
[A] Área de un triángulo
[B] Área de un circulo
[C] Perímetro de un cuadrado

Opción: __
b) Si el usuario escribe una opción que no está considerada en el menú, el 
programa enviará un mensaje al usuario similar a:
“La opción que escribiste no es válida…”
“Pulse cualquier tecla para terminar el programa…”, y entonces se 
terminará el programa.
c) Si el usuario escribió la opción “A” o “a”, entonces se le solicitará al usuario los 
datos necesarios para calcular e imprimir el área de un triángulo.
d) Si el usuario escribió la opción “B” o “b”, entonces se le solicitará al usuario los 
datos necesarios para calcular e imprimir el área de un círculo. Para este caso, 
defina el valor de Pi como una constante de 4 dígitos decimales.
e) Si el usuario escribió la opción “C” o “c”, entonces se le solicitará al usuario los 
datos necesarios para calcular e imprimir el perímetro de un cuadrado*/
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
	
	printf("\nMENÚ");
	printf("\n[A] Área de un tríangulo");
	printf("\n[B] Área de un cículo");
	printf("\n[C] Perímetro de un cuadrado");
	printf("\n\nOpción: ");
	scanf(" %c",&let);
	
	let=toupper(let);
	
	switch(let){
		case 'A': 	printf("\n\nCALCULO DEL ÁREA DE UN TRÍANGULO");
					printf("Dame la base del tríangulo: ");
					scanf(" %f",&base);
					printf("Dame la altura del tríangulo: ");
					scanf(" %f",&altura);
					areatri = base * altura / 2;
					printf("El área del tríangulo de base %g y de alura %g tiene un área de %g",base,altura,areatri);
		break;
		
		
		
		case 'B': printf("\n\nCALCULO DEL ÁREA DE UN CÍRCULO");
					printf("\nEscribe el radio de un cículo: ");
					scanf(" %f",&radio);
					areaCir = pi * pow(radio,2);
					printf("El área del cículo con el radio %g tiene un área de %g",radio,areaCir);
		break;
		
		
		
		case 'C': printf("\n\n CALCULO DEL PERÍMETRO DE UN CUADRADO");
					printf("\nEscribe la medida de un lado del cuadrado: ");
					scanf(" %f",ladoCua);
					perimetro = ladoCua*4;
		break;
		
		
		
		
		default: printf("\nLa opción que escribiste no es válida");
		
	}
	
	printf("Pulse cualquier tecla para continuar");
	getch();
	
	
	return 0;
	
	
	
	
	
	
	
}
