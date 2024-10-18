/*. Escribir el programa correspondiente en C que al recibir como datos tres valores 
enteros R, T y Q, determine si los mismos satisfacen la expresión R4 – T
3 + 4 * Q2 < 
820 y que en caso afirmativo, imprima la suma de los valores de R, T y Q. 
Finalmente, independientemente de si satisface o no la expresión, imprima el 
mensaje “Pulse cualquier tecla para terminar…”. Use la función pow() para el cálculo 
de las potencias y defina la cantidad de 820 como una constante simbólica 
denominada PAR.
*/
#include <stdio.h>
#include <math.h>
#include <conio.h>


#define PAR 820



main(){
	
	double r,t,q,expresion;
	
	printf("\nEscriba el valor de R");
	scanf(" %lf",&r);
	
	printf("\nEscriba el valor de T");
	scanf(" %lf",&t);
	
	printf("\nEscriba el valor de Q");
	scanf(" %lf",&q);
	
	
	expresion = pow(r,4) - pow(t,3) +4 * pow(q,2);
	
	if(expresion<PAR){
		printf("La suma de los valores R, T y Q es igual a : %lf",r+t+q);
		
	}
	printf("Pulse cualquier tecla para continuar");
	getch();
	
	return 0;
}
