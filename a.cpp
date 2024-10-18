#include <stdio.h>
main(){
	
	char nombreAlumn[40];
	printf("\nPor favor escribe tu nombre ");
	scanf(" %[^\n]",nombreAlumn);
	printf("H %s",nombreAlumn);
	return 0;
}
