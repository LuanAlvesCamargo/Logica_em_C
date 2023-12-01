/*
* 1 � Criar uma fun��o de C�mbio que converte real em d�lar ou real em euro ou real em guarani (moeda paraguaia).
* Procurar a cota��o do dia em sites de c�mbio. 
* F�rmulas: Dolar = Real / Cota��o do dia Euro = Real / Cota��o do Dia Guarani = Real * Cota��o do Dia
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
    } else {
        printf("C�digo de moeda inv�lido.\n");
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

