//10- Leia a m�dia do aluno. Se a m�dia for maior que 7 dar a mensagem aprovado,
//caso contr�rio informe ao aluno que ele est� de exame.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float media;

    printf("Informe a sua media: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("Aprovado: \n");
    } else {
        printf("Esta de EXAME: \n");
    }

    getchar();
    return 0;
}

