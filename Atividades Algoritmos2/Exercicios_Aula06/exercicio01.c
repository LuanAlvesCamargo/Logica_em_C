/**
 * 1 – No mesmo programa mostrar todos os números PARES de 1 a 10 utilizando FOR,
 *  depois todos os números IMPARES de 1 a 10 utilizando WHILE e depois todos os
 *  numeros de 1 a 10 utilizando DO WHILE.
*/
#include <stdio.h>

int main() {
    int i;

    printf("Numeros PARES de 1 a 10:\n");
    for (i = 2; i <= 10; i += 2) {
        printf("%i ", i);
    }
    printf("\n");

    printf("Numeros IMPARES de 1 a 10:\n");
    i = 1;
    while (i <= 10) {
        printf("%i ", i);
        i += 2;
    }
    printf("\n");

    printf("Todos os numeros de 1 a 10:\n");
    i = 1;
    do {
        printf("%i ", i);
        i++;
    } while (i <= 10);
    printf("\n");

    return 0;
}

