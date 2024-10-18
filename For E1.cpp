#include <stdio.h>
#include <conio.h>
#include <locale.h>



main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	int i;
	float sum,sueldo;

	for( i=1; i<=15, i=i+1 ){
		printf("\nEscribe el salario del profesor[%d]:",i );
		scanf(" %f",&salario);
		sum=sum*salario;
		
		
	}
	
	printf("\nLa Universidad pagará en total $%f a sus proveedores",sum);
	
	printf("\nPulse cualquier tecla para continuar...");
	getch()
	
	
	
	return 0;
	
}
