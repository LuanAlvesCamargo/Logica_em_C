//6- Acesse o nome e a idade de 2 pessoas. Verifique quem é o mais velho e informe o nome e a idade do mais velho.

#include <stdio.h>
#include <stdlib.h>

int main() {
	
    char nome1[50], nome2[50];
    int idade1, idade2;

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", nome1);

    printf("Digite a idade da primeira pessoa: ");
    scanf("%i", &idade1);

    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", nome2);

    printf("Digite a idade da segunda pessoa: ");
    scanf("%i", &idade2);

    if (idade1 > idade2) {
        printf("%s é o mais velho, com %d anos.\n", nome1, idade1);
    } else {
        printf("%s é o mais velho, com %d anos.\n", nome2, idade2);
    }
    
    getchar();
    return 0;
}

