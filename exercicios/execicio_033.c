/*
28 � Fazer um programa que leia o peso e altura de um jogador. Se o peso estiver entre 70 e 80 kilos e a altura estiver entre 1,70 e 1,80 o jogador est�
apto a jogar, sen�o o jogador n�o est� apto a jogar.
*/

#include <stdio.h>

int main() {
    float peso, altura;
    
    printf("Digite o peso do jogador em kilos: ");
    scanf("%f", &peso);
    
    printf("Digite a altura do jogador em metros: ");
    scanf("%f", &altura);
    
    if (peso >= 70 && peso <= 80 && altura >= 1.70 && altura <= 1.80) {
        printf("O jogador est� apto a jogar.\n");
    } else {
        printf("O jogador n�o est� apto a jogar.\n");
    }
    
    return 0;
}

