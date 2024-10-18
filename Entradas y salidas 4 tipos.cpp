#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_CTYPE,"Spanish");
	char nombreAlumno[30];
	char sexo;
	int edad;
	float promedio;
	
	printf("\nEscribe tu nombre");
	scanf("%[^\n]",nombreAlumno);
	printf("\n¿Cuál es tu sexo? (Escribe H si eres hombre o M si eres mujer): ");
	scanf(" %c",&sexo);
	printf("\n¿Cuántos años tienes?");
	scanf(" %d",&edad);
	printf("\n¿Con qué promedio terminaste el primer semestre?");
	scanf(" %f",&promedio);
	
	
}
