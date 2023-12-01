/*
* 8 – Fazer um programa que acesse o valor de 4 receitas e 6 despesas de uma casa. 
* Faça os cálculos e informe o valor total das receitas e valor total com as despesas. 
* Verifique mostrando uma mensagem se o valor da receita foi suficiente para cobrir o valor das despesas. 
* Mostre o saldo
*/ 

#include <stdio.h>

int main() {
	int i;
    float receitas[4];
    float despesas[6];
    float totalReceitas = 0.0;
    float totalDespesas = 0.0;
    float saldo;


    printf("Digite os valores das receitas:\n");
    for (i = 0; i < 4; i++) {
        printf("Receita %i: ", i + 1);
        scanf("%f", &receitas[i]);
        totalReceitas += receitas[i];
    }

    printf("Digite os valores das despesas:\n");
    for (int i = 0; i < 6; i++) {
        printf("Despesa %i: ", i + 1);
        scanf("%f", &despesas[i]);
        totalDespesas += despesas[i];
    }

    saldo = totalReceitas - totalDespesas;

    printf("\nTotal de Receitas: %.2f\n", totalReceitas);
    printf("Total de Despesas: %.2f\n", totalDespesas);
    printf("Saldo: %.2f\n", saldo);

    if (saldo >= 0) {
        printf("As receitas foram suficientes para cobrir as despesas.\n");
    } else {
        printf("As despesas foram maiores do que as receitas.\n");
    }

    return 0;
}

