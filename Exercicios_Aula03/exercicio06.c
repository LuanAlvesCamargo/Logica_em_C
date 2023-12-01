/**
* 6 - Fazer um programa que imprima(printf) números ímpares de 1 a 21.
*/

#include <stdio.h>

int main() {
	int i;
	
    printf("Numeros impares de 1 a 21:\n");
    
    for(i = 1; i <= 21; i += 2) {
        printf("%i\n", i);
    }

    return 0;
}

