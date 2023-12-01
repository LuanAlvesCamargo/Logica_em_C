/*
* 5 – Utilizando vetor dinâmico, leia o nome e a média fina de N alunos.
* Mostre o nome e a média final de todos os alunos e verifique se a média final for maior que 7 
* o aluno está aprovado, senão o alunos está de exame.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float mediaFinal;
} Aluno;

int main() {
    int n;
    printf("Digite o numero de alunos: ");
    scanf("%i", &n);

    if (n <= 0) {
        printf("Numero invalido de alunos.\n");
        return 1; // Saída com erro
    }

    Aluno *alunos = (Aluno *)malloc(n * sizeof(Aluno));

    if (alunos == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1; // Saída com erro
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %i: ", i + 1);
        scanf(" %[^\n]s", alunos[i].nome);
        printf("Digite a media final do aluno %i: ", i + 1);
        scanf("%f", &alunos[i].mediaFinal);
    }

    // Exibe os alunos e verifica se estão aprovados ou de exame
    printf("Alunos e situação:\n");

    for (int i = 0; i < n; i++) {
        printf("Nome: %s, Media Final: %.2f, Situacao: %s\n",
               alunos[i].nome, alunos[i].mediaFinal,
               alunos[i].mediaFinal > 7.0 ? "Aprovado" : "De Exame");
    }

    // Libera a memória alocada
    free(alunos);

    return 0; // Saída sem erro
}

