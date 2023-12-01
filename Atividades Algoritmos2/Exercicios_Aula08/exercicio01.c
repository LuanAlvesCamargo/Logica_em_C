/*
* 1 � Fazer um programa que leia a idade, o peso e a altura de 10 funcion�rios.
* Fazer os c�lculos necess�rios, mostre o dados lidos, o total e a m�dia de altura,
* peso e idade dos funcion�rios.
*/

#include <stdio.h>

int main() {
    int n = 10, i = 0;
    int idade, totalIdade = 0;
    float peso, totalPeso = 0.0;
    float altura, totalAltura = 0.0;

    for (i = 1; i <= n; i++) {
        printf("Informe a idade do funcionirio %i: ", i);
        scanf("%d", &idade);

        printf("Informe o peso do funcionario %i (em kg): ", i);
        scanf("%f", &peso);

        printf("Informe a altura do funcionario %i (em metros): ", i);
        scanf("%f", &altura);

        totalIdade += idade;
        totalPeso += peso;
        totalAltura += altura;
    }

    float mediaIdade = (float)totalIdade / n;
    float mediaPeso = totalPeso / n;
    float mediaAltura = totalAltura / n;

    // Exibindo os resultados
    printf("\nDados lidos:\n");
    printf("Total de Idade: %i\n", totalIdade);
    printf("Total de Peso: %.2f kg\n", totalPeso);
    printf("Total de Altura: %.2f metros\n", totalAltura);
    printf("\nM�dias:\n");
    printf("M�dia de Idade: %.2f\n", mediaIdade);
    printf("M�dia de Peso: %.2f kg\n", mediaPeso);
    printf("M�dia de Altura: %.2f metros\n", mediaAltura);

    return 0;
}

