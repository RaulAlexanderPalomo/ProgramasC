#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale>

main(){
	
	setlocale(LC_CTYPE,"Spanish");
	
	double s,a,area,b,c;
	
	printf("\nDame el largo del lado 1 ");
	scanf(" %lf",&a);	
	printf("\nDame el largo del lado 2 ");
	scanf(" %lf",&b);	
	printf("\nDame el largo del lado 3 ");
	scanf(" %lf",&c);
	
	s = (a+b+c)/2;
	area = sqrt(s+(s-a)*(s-b)*(s-c));	
	printf("El area es: %lf",area);
	
	printf("\nPulse cualquier tecla para continuar");
	getch();
	
	return 0 ;
	
}
