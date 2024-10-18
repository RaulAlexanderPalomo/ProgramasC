/*Escribir un programa que al recibir como datos las calificaciones de
 10 estudiantes que presentaron el examen de diagnóstico de inglés, calcule e imprima:

a)     Cuántos estudiantes obtuvieron una calificación en cada uno de los siguientes rangos:

De 0 a 30

De 31 a 60

De 61 a 90

De 91 a 100

b)     El promedio general del examen de diagnóstico.

Cada vez que solicites una calificación deberás verificar que esta esté comprendida entre cero a 100 puntos.

En caso de que el usuario te proporcione una calificación fuera del rango deberás
 enviarle un mensaje en el que le informes que la calificación deberá estar entre 
 cero a 100 y deberás solicitar de nuevo la calificación. Esto se realizará las veces
  que sea necesario hasta que el usuario te proporcione una calificación correcta.*/
  
  
  
  
  
#include <stdio.h>
#include <locale.h>
#include <conio.h>


main(){
	setlocale(LC_CTYPE,"Spanish");	
	int contAlumno,rango1,rango2,rango3,rango4;
	float promedioGen,sumador,calificacion;
	
	rango1=0;
	rango2=0;
	rango3=0;
	rango4=0;
	
	contAlumno=1;
	sumador=0;
	do{
	
		do{
			printf("\nDame la calificación del alumno %d: ",contAlumno);
			scanf(" %f",&calificacion);	
		
		}while (calificacion < 0 || calificacion > 100);
		sumador=sumador+calificacion;
		if(calificacion>=0&&calificacion<=30){
			rango1=rango1+1;
			
			}else{
			if(calificacion>30&&calificacion<=60){
				rango2=rango2+1;
				}else{
					if(calificacion>60&&calificacion<=90){
						rango3=rango3+1;
					}else{
						rango4=rango4+1;
					}
				}
		}
		
		
	contAlumno++;
	}while(contAlumno<=10);
	printf("\nLa cantidad de alumnos con un puntaje de 0 hasta 30 son: %d",rango1);
	printf("\nLa cantidad de alumnos con un puntaje de 31 hasta 60 son: %d",rango2);
	printf("\nLa cantidad de alumnos con un puntaje de 61 hasta 90 son: %d",rango3);
	printf("\nLa cantidad de alumnos con un puntaje de 91 hasta 100 son: %d",rango4);
	promedioGen=sumador/10;
	printf("\nEl promedio general del grupo es: %g",promedioGen);
	
	printf("\nPulse cualquier tecla para continuar...");
	getch();
	
	return 0;
	
}
