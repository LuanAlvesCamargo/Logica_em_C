/*
21� Acessar idade e sexo de uma pessoa (digitar 1 para masculino e 2 para feminino) e verificar se a pessoa pode fazer o alistamento militar.
*/

#include <stdio.h>

int main() {
    int idade, sexo;

    printf("Digite a idade da pessoa: ");
    scanf("%i", &idade);

    printf("Digite o sexo da pessoa (1 para masculino, 2 para feminino): ");
    scanf("%i", &sexo);

    if (sexo == 1 && idade >= 18) {
        printf("Alistamento militar obrigat�rio!\n");
    } else {
        printf("N�o � necess�rio o alistamento militar obrigat�rio.\n");
    }

    return 0;
}

