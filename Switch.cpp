#include <locale.h>
#include <stdio.h>
#include <conio.h>

main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	char dia;
	
	printf("\nEscribe un n�mero del 1 al 7   ");
	dia = getchar();
	
	switch(dia){
		
		case '1' : printf("\nEl dia 1 de la semana es lunes");
					break;
		
		case '2' : printf("\nEl dia 1 de la semana es martes");
					break;	
			
		case '3' : printf("\nEl dia 1 de la semana es mi�rcoles");
					break;
			
		case '4' : printf("\nEl dia 1 de la semana es jueves");
					break;
			
		case '5' : printf("\nEl dia 1 de la semana es viernes");
					break;
			
		case '6' : printf("\nEl dia 1 de la semana es s�bado");
					break;
			
		case '7' : printf("\nEl dia 1 de la semana es domingo");
					break;
		default: printf("\nEl n�mero que escribiste no est� en el rango.");
		
		
	}
	
	printf("\nPulse cualquier tecla para continuar");
	getch();
	
	return 0;
}

