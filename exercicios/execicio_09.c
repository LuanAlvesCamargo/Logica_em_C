//9- Leia 2 números e informe qual o mair. Desconsiderar a possibilidade dos números serem iguais.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1 = 0, n2 = 0;

    printf("Informe uma numero INTEIRO: ");
    scanf("%i", &n1);
    printf("Informe uma numero INTEIRO: ");
    scanf("%i", &n2);
    if (n1 > n2) {
        printf("Esse e o maior numero: %i\n", n1);
    } else {
        printf("Esse e o maior numero: %i\n", n2);
    }

    getchar();
    return 0;
}

