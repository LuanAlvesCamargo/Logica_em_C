/**
* 5 - Fazer um programa que imprima(printf) n�meros pares de 0 a 20.
*/

#include <stdio.h>

int main() {
	int i;
    printf("N�meros pares de 0 a 20:\n");
    
    for(i = 0; i <= 20; i += 2) {
        printf("%i\n", i);
    }

    return 0;
}

