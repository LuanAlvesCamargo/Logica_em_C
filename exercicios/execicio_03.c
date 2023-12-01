/*
3 – aproveitando o programa 1, ... Se a altura for menor que 1,80 ou se o peso for menor que 100kg, 
mensagem categoria indefinida, senão categoria
peso pesado.
*/
#include <stdio.h>

int main() {
    float peso, altura;
    
    printf("Digite o peso do jogador em quilos: ");
    scanf("%f", &peso);
    
    printf("Digite a altura do jogador em metros: ");
    scanf("%f", &altura);
    
    if (altura < 1.80 || peso < 100) {
        printf("Categoria indefinida para o jogador.\n");
    } else {
        printf("O jogador está apto a jogar na categoria peso pesado.\n");
    }
    
    return 0;
}

