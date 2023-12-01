/**
* 3 – Em uma sala de 15 alunos. Leia a série digite 1 para 1CC, 2 para 2CC, 3 para 3CC e 4 para 4CC. Informe o
* total de alunos de cada curso e o total de respostas erradas.
*/

#include <stdio.h>


int main() {
    int totalAlunos = 15;
    int curso, resposta, totalRespostasErradas = 0;
    int total1CC = 0, total2CC = 0, total3CC = 0, total4CC = 0;
    int i;

    for (i = 0; i < totalAlunos; i++) {
        printf("Aluno %i:\n", i + 1);
        
        printf("Digite a serie (1 para 1CC, 2 para 2CC, 3 para 3CC, 4 para 4CC): ");
        scanf("%i", &curso);

        if (curso >= 1 && curso <= 4) {
            switch (curso) {
                case 1:
                    total1CC++;
                    break;
                case 2:
                    total2CC++;
                    break;
                case 3:
                    total3CC++;
                    break;
                case 4:
                    total4CC++;
                    break;
            }
        } else {
            printf("Serie invalida!\n");
            totalRespostasErradas++;
        }
        
        printf("\n");
    }

    printf("Total de alunos em 1CC: %i\n", total1CC);
    printf("Total de alunos em 2CC: %i\n", total2CC);
    printf("Total de alunos em 3CC: %i\n", total3CC);
    printf("Total de alunos em 4CC: %i\n", total4CC);
    printf("Total de respostas erradas: %i\n", totalRespostasErradas);

    return 0;
}
