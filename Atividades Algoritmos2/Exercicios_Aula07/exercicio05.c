/*
* 5- Fazer um programa que leia o peso de todos os alunos da sala de aula. 
* Faça os cálculos necessários, mostre todos os pesos lidos e informe o peso total dos alunos e a média de peso.
*/


#include <stdio.h>

int main() {
    int numAlunos;
    float peso, pesoTotal = 0, mediaPeso;

    printf("Quantos alunos na sala de aula? ");
    scanf("%i", &numAlunos);

    if (numAlunos <= 0) {
        printf("Número inválido de alunos.\n");
        return 1;
    }

    for (int i = 1; i <= numAlunos; i++) {
        printf("Digite o peso do aluno: ", i);
        scanf("%f", &peso);

        pesoTotal += peso;
    }

    mediaPeso = pesoTotal / numAlunos;

    printf("\nPesos dos alunos:\n");
    for (int i = 1; i <= numAlunos; i++) {
        printf("Aluno %i: %.2f kg\n", i, peso);
    }

    printf("\nPeso total dos alunos: %.2f kg\n", pesoTotal);
    printf("Media de peso dos alunos: %.2f kg\n", mediaPeso);

    return 0;
}
