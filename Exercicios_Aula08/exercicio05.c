/*
* 5 � Utilizando vetor din�mico, leia o nome e a m�dia fina de N alunos.
* Mostre o nome e a m�dia final de todos os alunos e verifique se a m�dia final for maior que 7 
* o aluno est� aprovado, sen�o o alunos est� de exame.
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
        return 1; // Sa�da com erro
    }

    Aluno *alunos = (Aluno *)malloc(n * sizeof(Aluno));

    if (alunos == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1; // Sa�da com erro
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %i: ", i + 1);
        scanf(" %[^\n]s", alunos[i].nome);
        printf("Digite a media final do aluno %i: ", i + 1);
        scanf("%f", &alunos[i].mediaFinal);
    }

    // Exibe os alunos e verifica se est�o aprovados ou de exame
    printf("Alunos e situa��o:\n");

    for (int i = 0; i < n; i++) {
        printf("Nome: %s, Media Final: %.2f, Situacao: %s\n",
               alunos[i].nome, alunos[i].mediaFinal,
               alunos[i].mediaFinal > 7.0 ? "Aprovado" : "De Exame");
    }

    // Libera a mem�ria alocada
    free(alunos);

    return 0; // Sa�da sem erro
}

