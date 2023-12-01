/**
 * 2 � Perguntar ao usu�rio quantos alunos tem na sala de aula. 
 * Em seguida, atrav�s de um la�o/looping, entrar com duas notas de prova de todos os alunos da sala, 
 * um por vez, fazendo o c�lculo e mostrando a m�dia do aluno.
 * Durante o c�lculo acumular a m�dia de todos os alunos e ao final do c�lculo de m�dia de todos os alunos,
 * mostrar a m�dia da turma.
*/

#include <stdio.h>

int main() {
    int num_alunos;
    float nota, media_aluno, media_turma = 0;
	int i, j;
    printf("Quantos alunos tem na sala? ");
    scanf("%i", &num_alunos);
    
    for (i = 1; i <= num_alunos; i++) {
        media_aluno = 0; //
        
        for (j = 1; j <= 2; j++) {
            printf("Digite a nota do aluno: ", j, i);
            scanf("%f", &nota);
            media_aluno += nota;
        }
        
        media_aluno /= 2;
        printf("A media do aluno e: %.2f\n", i, media_aluno);
        
        media_turma += media_aluno;
    }

    media_turma /= num_alunos; 

    printf("A media da turma e: %.2f\n", media_turma);

    return 0;
}

