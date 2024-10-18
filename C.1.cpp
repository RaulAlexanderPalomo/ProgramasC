#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE,"Spanish");
    int N, i = 1;
    
    // Leer el n�mero de fichas en el mont�n
    printf("Ingrese el n�mero de fichas en el mont�n: ");
    scanf("%d", &N);
    
    // Determinar qui�n ganar� el juego
    while (N % (i + 1) == 0) {
        i++;
    }
    
    // Si i es impar, Jane ganar�; de lo contrario, John ganar�
    if (i % 2 == 1) {
        printf("El ganador del juego es: Jane\n");
    } else {
        printf("El ganador del juego es: John\n");
    }
    
    return 0;
}

