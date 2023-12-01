/**
* 3 – Crie um programa que leia o sexo 1 para masculino ou 2 para feminino, faça os testes, conte os valores e informe o total de alunos,
* o total de homens e o total de mulheres na sala de aula. O programa vai ler o sexo até que um número diferente de 1 e 2 seja encontrado.
*/

#include <stdio.h>

int main() {
    int sexo, total_alunos = 0, total_homens = 0, total_mulheres = 0;

    printf("Informe o sexo (1 para masculino, 2 para feminino) dos alunos. Para sair, digite outro valor.\n");

    do {
        printf("Sexo (1 - masculino, 2 - feminino): ");
        scanf("%i", &sexo);

        if (sexo == 1) {
            total_alunos++;
            total_homens++;
        } else if (sexo == 2) {
            total_alunos++;
            total_mulheres++;
        } else {
            break; // Sair do loop quando um valor diferente de 1 e 2 for inserido
        }
    } while (1);

    printf("Total de alunos: %i\n", total_alunos);
    printf("Total de homens: %i\n", total_homens);
    printf("Total de mulheres: %i\n", total_mulheres);

    return 0;
}

