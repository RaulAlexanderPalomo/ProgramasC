#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE,"Spanish");
    int N, i = 1;
    
    // Leer el número de fichas en el montón
    printf("Ingrese el número de fichas en el montón: ");
    scanf("%d", &N);
    
    // Determinar quién ganará el juego
    while (N % (i + 1) == 0) {
        i++;
    }
    
    // Si i es impar, Jane ganará; de lo contrario, John ganará
    if (i % 2 == 1) {
        printf("El ganador del juego es: Jane\n");
    } else {
        printf("El ganador del juego es: John\n");
    }
    
    return 0;
}

