/*
4 – Ler o código do curso. Se código do curso igual a 1 ou código do curso igual a 
2 mostrar mensagem fará a disciplina banco de dados, senão fará a
disciplina programação web.
*/
#include <stdio.h>

int main() {
    int codigoCurso;
    
    printf("Digite o código do curso: ");
    scanf("%d", &codigoCurso);
    
    if (codigoCurso == 1 || codigoCurso == 2) {
        printf("Você fará a disciplina de Banco de Dados.\n");
    } else {
        printf("Você fará a disciplina de Programação Web.\n");
    }
    
    return 0;
}

