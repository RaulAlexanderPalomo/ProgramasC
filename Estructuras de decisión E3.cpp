/*Escribir un programa que calcule el �rea de dos tri�ngulos conociendo la base y la 
altura de cada uno e imprima el �rea del mayor. Si las �reas son iguales, que 
imprima la frase �Las �reas son iguales�.*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>


main(){
	setlocale(LC_CTYPE,"Spanish");
	
	float areaTri1,areaTri2,base1,altura1,altura2,base2;
	
	printf("\nDame la base del tr�angulo 1  ");
	scanf(" %f",&base1);
	printf("\nDame la altura del tri�ngulo 1  ");
	scanf(" %f",&altura1);
	
	printf("\nDame la base del tr�angulo 2  ");
	scanf(" %f",&base2);
	printf("\nDame la altura del tri�ngulo 2  ");
	scanf(" %f",&altura2);
	
	
	
	areaTri1 = base1 * altura1 / 2;
	areaTri2 = base2 * altura2 / 2;
	
	
	if(areaTri1==areaTri2){
		printf("\nLas �reas son iguales");
	}
	else{
		if(areaTri1>areaTri2){
			printf("\nEl tri�ngulo uno es el de mayor �rea");
		}
		else{
			printf("\nEl area del segundo tri�ngulo es el mayor");
		}
	}
	
	
	
	printf("\Pulse cualquier tecla para continuar");
	getch();
	
	return 0;
	
}

