#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <locale.h>

void opciones();


main(){
	setlocale(LC_CTYPE,"Spanish");
	opciones();
	
	getch();
	
	return 0;
}


void opciones(){
	char opcion;
	do{
		printf("\nMEN� PRINCIPAL\n");
		printf("\n[A] Promedio Alumnos");
		printf("\n[B] Mayor�a de Edad");
		printf("\n[C] Salir del men�");
		printf("\nSu opci�n es: ");
		scanf(" %c",&opcion);	
		opcion=tolower(opcion);
		
		
	}while(opcion!='a'&&opcion!='b'&&opcion!='c');
	
	switch(opcion){
		case 'a': promedio();
				 break;
		case 'b': 
				 break;
		case 'c':
				 break;
	}	
	
}



float promedio(){
	int numAsignaturas,i;
	float suma,calificacion,promedio;
	suma=0;
	printf("\n\nC�lculo del promedio de las asignaturas de un alumno");
	printf("\n�Cu�ntas asignaturas cursas? ");
	scanf(" %d",&numAsignaturas);
	for(i=1;i<=numAsignaturas,i++){
		do{
			printf("\nEscribe la calificaci�n del alumno %d entre 0 a 100: ",i);
			scanf(" %f",&calificacion);
			
		}while(calificacion<0 || calificacion>100);
		suma = suma + calificacion;
	}
	promedio = suma/numAsignaturas;
	respuesta(promedio);
	printf("Pulse cualquier tecla para continuar");
	getch();
	
	return 0;
	
}


void respuesta(float otroPromedio){
	printf("\nEl promedio del estudiante es%f",otropromedio);
	
	return;
}

int trabajar(){
	int i,edad,cuentaEstudiante=0;
	for(i=1;i<=otroNumEstudiantes,i++){
		printf("\n�Cu�ntos")
	}
	
	
	
}

