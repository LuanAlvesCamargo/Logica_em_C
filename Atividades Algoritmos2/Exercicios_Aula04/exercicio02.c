/**
 * 2 – Fazer um programa que mostre somente os números de 3 em 3, 
 * a partir do 3 até o 33.
*/

#include <stdio.h>

int main() {
    int i = 3;

    while (i <= 33) {
        printf("%i\n", i);
        i += 3;
    }

    return 0;
}
