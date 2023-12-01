/*
* 4 � Fazer um programa que leia o pre�o de 10 produtos.
* Leia a cota��o do d�lar e a cota��o do euro uma �NICA vez. 
* Mostre os pre�os dos produtos lidos e seus respectivos valores em d�lar e euro.
*/

#include <stdio.h>

int main() {
    float precos[10];
    float cotacaoDolar, cotacaoEuro;

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);

    printf("Digite a cotacao do euro: ");
    scanf("%f", &cotacaoEuro);

    for (int i = 0; i < 10; i++) {
        printf("Digite o pre�o do produto %i em reais: ", i + 1);
        scanf("%f", &precos[i]);
    }

    printf("\nProdutos e seus pre�os em Reais, Dolar e Euro:\n");

    for (int i = 0; i < 10; i++) {
        float precoEmDolar = precos[i] / cotacaoDolar;
        float precoEmEuro = precos[i] / cotacaoEuro;
        
        printf("Produto %i: R$ %.2f, $ %.2lf, � %.2f\n", i + 1, precos[i], precoEmDolar, precoEmEuro);
    }

    return 0;
}

