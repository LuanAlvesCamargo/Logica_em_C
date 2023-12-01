/**
* 7 - Fazer um programa que leia 10 números e conte quantos deles estão no intervalo [10,20] e quantos deles
* estão fora do intervalo, mostrar o total de cada contador.
*/

#include <stdio.h>

int main() {
    int numero, dentroIntervalo = 0, foraIntervalo = 0;
	int i;
	
    for (i = 0; i < 10; i++) {
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &numero);

        if (numero >= 10 && numero <= 20) {
            dentroIntervalo++;
        } else {
            foraIntervalo++;
        }
    }

    printf("Total de numeros dentro do intervalo [10,20]: %i\n", dentroIntervalo);
    printf("Total de numeros fora do intervalo [10,20]: %i\n", foraIntervalo);

    return 0;
}
