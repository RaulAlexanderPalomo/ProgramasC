#include <stdio.h>
#include <conio.h>
#include <locale.h>

int discoteca();


main(){
	setlocale(LC_CTYPE,"Spanish");
	int respuesta;
	respuesta=discoteca();
	printf("Los j�venes con una edad entre 23 y 26 a�os son: %d",respuesta);
	printf("Pulse cualquier tecla para continuar");
	getch();
	return 0;
}




int discoteca(){
	
	int numJovenes,edad,contRang;
	
	printf("�Cu�ntos j�venes vinieron a la discoteca?");
	scanf(" %d",&numJovenes);
	int i;
	i=1;
	
	do{
		
		printf("Dime tu edad: ");
		scanf(" %d",&edad);
		if(edad>=23 && edad<=26){
			contRang++;
			
		}
		
	
		
	i++;
	}while(i<=numJovenes);
	
	
	
	return (contRang);
}

