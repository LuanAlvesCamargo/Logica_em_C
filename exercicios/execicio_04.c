/*
4 � Ler o c�digo do curso. Se c�digo do curso igual a 1 ou c�digo do curso igual a 
2 mostrar mensagem far� a disciplina banco de dados, sen�o far� a
disciplina programa��o web.
*/
#include <stdio.h>

int main() {
    int codigoCurso;
    
    printf("Digite o c�digo do curso: ");
    scanf("%d", &codigoCurso);
    
    if (codigoCurso == 1 || codigoCurso == 2) {
        printf("Voc� far� a disciplina de Banco de Dados.\n");
    } else {
        printf("Voc� far� a disciplina de Programa��o Web.\n");
    }
    
    return 0;
}

