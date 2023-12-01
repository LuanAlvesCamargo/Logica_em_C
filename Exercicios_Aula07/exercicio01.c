/*
* 1 – Fazer um programa que leia a nota de 5 provas, calcule a média e verifique a situação do aluno. 
* SE a média for superior ou igual a 7, o aluno está aprovado, se a média for maior ou igual 4 e menor do que 7,
* o aluno estará de exame, caso contrário o aluno ficará reprovado. Verificar possibilidade de ter mais alunos para 
* calcular a média.
*/

#include <stdio.h>

int main() {
    int numAlunos, aluno, i;
    printf("Quantos alunos deseja calcular a media? ");
    scanf("%i", &numAlunos);

    for (aluno = 0 ; aluno <= numAlunos; aluno++) {
        float notas[5];
        float media = 0;

        printf("Digite as notas do aluno %f:\n", aluno);
        
        for (i = 0; i < 5; i++) {
            printf("Nota %f: ", i + 1);
            scanf("%f", &notas[i]);
        }

        for (i = 0; i < 5; i++) {
            media += notas[i];
        }

        media /= 5;

        printf("A media do aluno e %.2f\n", aluno, media);

        if (media >= 7) {
            printf("Situação: Aprovado\n");
        } else if (media >= 4) {
            printf("Situação: Exame\n");
        } else {
            printf("Situação: Reprovado\n");
        }

        if (aluno < numAlunos) {
            printf("\n");
        }
    }

    return 0;
}

