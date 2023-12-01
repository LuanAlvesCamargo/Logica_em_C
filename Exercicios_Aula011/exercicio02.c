/*
* 2 � Criar uma fun��o para convers�o entre as temperaturas Celsius e Fahrenheit. 
* Primeiro o usu�rio deve escolher se vai entrar com a temperatura em C�lsius ou Fahrenheit,
* depois a convers�o escolhida � realizada. As f�rmulas de convers�o s�o: C= (F - 32) / 1.8 F= (C * 1.8) + 32
*/

#include <stdio.h>

float taxa_de_cambio(char moeda[]) {
    float taxa;
    if (strcmp(moeda, "USD") == 0) {
        taxa = 5.63;
    } else if (strcmp(moeda, "EUR") == 0) {
        taxa = 6.45;
    } else if (strcmp(moeda, "PYG") == 0) {
        taxa = 0.00077;
        printf("o�digo de moeda invalido.\n");
        return -1;
    }
    return taxa;
}

void conversao_de_moeda(float valor, char moeda[]) {
    float taxa = taxa_de_cambio(moeda);
    if (taxa != -1) {
        float usd = valor / taxa;
        float eur = valor / taxa;
        float pyg = valor * taxa;
        printf("%.2f BRL e igual a:\n", valor);
        printf("%.2f USD\n", usd);
        printf("%.2f EUR\n", eur);
        printf("%.2f PYG\n", pyg);
    }
}

int main() {
    float valor = 100;
    char moeda[] = "USD";
    conversao_de_moeda(valor, moeda);
    return 0;
}
