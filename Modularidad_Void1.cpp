#include <stdio.h>
#include <locale.h>


void suma (){
	
	
	setlocale(LC_CTYPE,"Spanish");
	
	int num1,num2,sum;
	
	printf("\nDame el valor del primer número entero:  ");
	scanf(" %d",&num1);
	printf("\nDame el valor del segundo número entero: ");
	scanf(" %d",num2);
	
	
	sum=num1+num2;
	
	printf("\nEl resultado de la suma es %d",sum);
	
	
	return;
	
	
}

int main(){
	
	suma();
	
	
	
	
	return 0;
}

