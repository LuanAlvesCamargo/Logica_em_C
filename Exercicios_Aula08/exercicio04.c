/*
* 4 – Fazer um programa que leia o preço de 10 produtos.
* Leia a cotação do dólar e a cotação do euro uma ÚNICA vez. 
* Mostre os preços dos produtos lidos e seus respectivos valores em dólar e euro.
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
        printf("Digite o preço do produto %i em reais: ", i + 1);
        scanf("%f", &precos[i]);
    }

    printf("\nProdutos e seus preços em Reais, Dolar e Euro:\n");

    for (int i = 0; i < 10; i++) {
        float precoEmDolar = precos[i] / cotacaoDolar;
        float precoEmEuro = precos[i] / cotacaoEuro;
        
        printf("Produto %i: R$ %.2f, $ %.2lf, € %.2f\n", i + 1, precos[i], precoEmDolar, precoEmEuro);
    }

    return 0;
}

