/*
* 4- Fazer um programa que leia a idade de todos os alunos da sala de aula e mostre todas as idades lidas.
*/

#include <stdio.h>

int main() {
    int idade, contador = 0;
    
    printf("Digite as idades dos alunos da sala de aula (digite -1 para encerrar):\n");
    
    while (1) {
        printf("Idade do aluno %i: ", contador + 1);
        scanf("%i", &idade);
        
        if (idade == -1) {
            break;
        }
        
        printf("Idade lida: %i\n", idade);
        contador++;
    }
    
    if (contador == 0) {
        printf("Nenhuma idade foi lida.\n");
    } else {
        printf("Total de idades lidas: %i\n", contador);
    }
    
    return 0;
}

