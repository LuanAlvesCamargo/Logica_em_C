/*
31 � Leia 3 notas de um aluno e calcule a m�dia. Mostre uma informa��o dizendo se o aluno foi aprovado ou n�o. Considere que um aluno � aprovado
se sua m�dia for maior que 7 e se n�o apresentou nenhuma nota abaixo de 5.
*/

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    if (media > 7 && nota1 >= 5 && nota2 >= 5 && nota3 >= 5) {
        printf("O aluno foi aprovado!\n");
    } else {
        printf("O aluno foi reprovado.\n");
    }
    
    return 0;
}

