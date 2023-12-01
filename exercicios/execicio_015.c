//15 – Fazer um programa que leia o nome e a idade de 3 pessoas, faças os cálculos necessários, mostre o nome e as idades lidas, 
//o resultado da soma das idades e a idade média das pessoas.

#include <stdio.h>

int main() {
    char nome1[50], nome2[50], nome3[50];
    int idade1, idade2, idade3;
    int somaIdades, mediaIdades;
    
    printf("Digite o nome e a idade da primeira pessoa: ");
    scanf("%s %d", nome1, &idade1);
    
    printf("Digite o nome e a idade da segunda pessoa: ");
    scanf("%s %d", nome2, &idade2);
    
    printf("Digite o nome e a idade da terceira pessoa: ");
    scanf("%s %d", nome3, &idade3);
    
    somaIdades = idade1 + idade2 + idade3;
    mediaIdades = somaIdades / 3;
    
    printf("Nome 1: %s, Idade 1: %d\n", nome1, idade1);
    printf("Nome 2: %s, Idade 2: %d\n", nome2, idade2);
    printf("Nome 3: %s, Idade 3: %d\n", nome3, idade3);
    printf("Soma das idades: %d\n", somaIdades);
    printf("Idade media: %d\n", mediaIdades);
    
    return 0;
}

