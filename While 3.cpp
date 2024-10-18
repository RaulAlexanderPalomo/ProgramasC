/*Lee 25 valores y calcule e imprima el promedio de todos ellos*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int contador=1;
	float valor,suma=0,promedio;
	
	
	while(contador<=25){
	
		printf("\Introduce el valor número %d: ",contador);
		scanf(" %f",&valor);
		suma=suma+valor;
		contador++;	
	}
	promedio=suma/25;
	
	printf("El promedio de las calificaciones proporcionadas es: %g",promedio);
	
	printf("\nPulse cualquier tecla para continuar");
	getch();
	
	
	return 0;
	
}



