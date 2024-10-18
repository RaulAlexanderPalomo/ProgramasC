#include <stdio.h>
#include <conio.h>
#include <locale.h>



main(){
	char nombreVendedor[40];
	int clave;
	char turno;
	float totalVentas;
	
	setlocale(LC_CTYPE,"Spanish");
	
	
	printf("Escribe el nombre completo del trabajador");
	scanf(" %[^\n]",&nombreVendedor);
	printf("\nEscribe la clave del vendedor");
	scanf(" %d",&clave);
	printf("\nEscribe el turno en el que labora: (M para matutino, V para vespertino, o N para nocturno)");
	scanf(" %c",&turno);
	printf("\n¿Cuál es el total de la venta que realizó el vendedor en todo el día?");
	scanf(" %f",&totalVentas);


	printf("\n\n\n INFORMACIÓN DEL VENDEDOR");
	printf("\n\n el vendedor se llama %s, su clave es %d, labora en el turno %c, y vendió un total de %g",nombreVendedor, clave, turno, totalVentas);
	

	
	
	return 0;
	}

