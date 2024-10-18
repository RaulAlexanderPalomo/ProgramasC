#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

#define PI 3.1416

main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	double radio,r2,areaCil,volcilindro;
	float altura;
	
	
	printf("\nEscribe el radio del círculo");
	scanf(" %lf",&radio);
	printf("\nEscribe la altura del cilindro");
	scanf(" %f",&altura);
	
	areaCil = 2*PI*radio*altura;
	volcilindro = PI*pow(radio,2)*altura;
	printf("El área del cilindro es: %lf y su volumen es: %lf",areaCil,volcilindro);
	
	printf("\nPulse una tecla para continuar");
	getch();
	
	
	
	
	
	return 0;
		
}
