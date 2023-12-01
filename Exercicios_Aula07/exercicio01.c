/*
* 1 � Fazer um programa que leia a nota de 5 provas, calcule a m�dia e verifique a situa��o do aluno. 
* SE a m�dia for superior ou igual a 7, o aluno est� aprovado, se a m�dia for maior ou igual 4 e menor do que 7,
* o aluno estar� de exame, caso contr�rio o aluno ficar� reprovado. Verificar possibilidade de ter mais alunos para 
* calcular a m�dia.
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
            printf("Situa��o: Aprovado\n");
        } else if (media >= 4) {
            printf("Situa��o: Exame\n");
        } else {
            printf("Situa��o: Reprovado\n");
        }

        if (aluno < numAlunos) {
            printf("\n");
        }
    }

    return 0;
}

