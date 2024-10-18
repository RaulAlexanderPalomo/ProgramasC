/*Escribir el programa tal que a partir del peso, la aoltura y el sexo de las personas, 
imprima el promedio de la altura y del peso en función del sexo*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>
main(){
	
	setlocale(LC_CTYPE,"Spanish");
	int personas;
	
	
	
	printf("Dame la cantidad de personas con las que vamos a trabajar");
	scanf(" %d",&personas);
	for(i=1;i<=personas;++i){
		printf("\nEscribe el peso de la persona %d: ");
		scanf(" %f",&peso);
		printf("\nEscribe la altura de la persona");
		scanf(" %f"&altura);
		printf("\nEscribe H si el sexo de la persona es hombre, o M si el sexo es mujer: ");
		scanf(" %c",&sexo);
		sexo=toupper(sexo);
		if(sexo=='H'){
			cuentaHombres=cuentaHombres+1;
			sumaAlturaHombres=sumaAlturaHombres+altura;
			sumaPesoHombres=sumaPesoHombres+peso;
		}
		else{
			cuentaMujeres=cuentaMujeres+1;
			sumaAlturaMujeres=sumaAlturaMujeres+altura;
			sumaPesoMujeres=sumaPesoMujeres+peso;
			
		}		
	}
	
	promedioPesoHombres=sumaPesoHombres/cuentaHombres;
	promedioAlturaHombres=sumaAlturaHombres/cuentaHombres;
	promedioPesoMujeres=sumaPesoMujeres/cuentaMujeres;
	promedioAlturaMujeres=sumaAlturaMujeres/cuentaMujeres;
	
	
	printf
	printf
	printf
	printf
	
	
	printf("Pulse cualquier tecla para continuar...");
	getch();
	
	return 0;
	
}
