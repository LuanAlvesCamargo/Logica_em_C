/*
* 2 � Fazer um programa que leia o quantidade de km a ser percorrida e 
* a quantidade de km que um carro faz com 1 litro de combust�vel. 
* Fazer o c�lculos qkmpercorrida[x] / consumo[x] e informe quantos litros de combust�vel
* s�o necess�rios para percorrer a dist�ncia. Fazer isso com um vetor para 6 ve�culos;
*/

#include <stdio.h>

int main() {
    int numVeiculos = 6, i = 0;
    float kmPercorrida, consumo;
    float litrosNecessarios[numVeiculos];

    for (i = 0; i < numVeiculos; i++) {
        printf("Informe a quantidade de km a ser percorrida para o veiculo %i: ", i + 1);
        scanf("%f", &kmPercorrida);
        
        printf("Informe a quantidade de km que o ve�culo %i faz com 1 litro de combustivel: ", i + 1);
        scanf("%f", &consumo);

        litrosNecessarios[i] = kmPercorrida / consumo;
    }

    printf("\nRelatorio de Consumo de Combustivel:\n");
    for (int i = 0; i < numVeiculos; i++) {
        printf("Veiculo %o: %.2f litros necessarios para percorrer %.2f km\n", i + 1, litrosNecessarios[i], kmPercorrida);
    }

    return 0;
}

