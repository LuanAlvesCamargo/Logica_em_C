/*
2 – aproveitando o programa 1, ... Se a altura for maior que 1,80 e peso for acima de 100 kg,
mensagem a categoria e peso pesado, senão categoria
indefinida.
*/
#include <stdio.h>

int main() {
    float peso, altura;
    
    printf("Digite o peso do jogador em quilos: ");
    scanf("%f", &peso);
    
    printf("Digite a altura do jogador em metros: ");
    scanf("%f", &altura);
    
    if (peso >= 70 && peso <= 80 && altura >= 1.70 && altura <= 1.80) {
        printf("O jogador está apto a jogar na categoria padrão.\n");
    } else if (altura > 1.80 && peso > 100) {
        printf("O jogador está apto a jogar na categoria peso pesado.\n");
    } else {
        printf("Categoria indefinida para o jogador.\n");
    }
    
    return 0;
}
