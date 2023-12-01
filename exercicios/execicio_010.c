//10- Leia a média do aluno. Se a média for maior que 7 dar a mensagem aprovado,
//caso contrário informe ao aluno que ele está de exame.

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

