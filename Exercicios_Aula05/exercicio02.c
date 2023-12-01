/**
* 2 � Crie um programa que leia o pre�o de 5 produtos, acumule esses valores e informe o valor m�dio dos pre�os.
*/
#include <stdio.h>

int main() {
    int numProdutos = 5; 
    float preco, soma = 0.0, media;
	int i = 0;	
    printf("Informe o preco de produtos:\n", numProdutos);

    do {
        printf("Produto: R$ ", i + 1);
        scanf("%f", &preco);

        if (preco < 0) {
            printf("Preco invalido. O preco deve ser maior ou igual a zero.\n");
        } else {
            soma += preco;
            i++;
        }
    } while (i < numProdutos);

    if (i > 0) {
        media = soma / i;
        printf("Valor medio dos precos: R$%.2f\n", media);
    } else {
        printf("Nenhum preco valido foi informado.\n");
    }

    return 0;
}

