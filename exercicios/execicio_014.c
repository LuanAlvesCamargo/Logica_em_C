//14- Fazer um menu com a possibilidade de 3 lanches(exemplos 1 - X-TUDO R$ 33,00 2 - XRATAO R$38,00 3 - XSALADA R$25,00).
//Acesse a opcão de lanche escolhida e a quantidade. Verifique a opcão escolhida e atribua o valor lnache. Faça os cáculos necessários e informe: Lanche escolhido, Preço, Quantidade e Valor a pagar. Cosiderer a possibilidade de opção inválida. 

#include <stdio.h>

int main() {
    int opcao, quantidade;
    float preco, valorTotal;

    printf("Menu de Lanches:\n");
    printf("1 - X-TUDO: R$ 33,00\n");
    printf("2 - XRATAO: R$ 38,00\n");
    printf("3 - XSALADA: R$ 25,00\n");
    printf("Escolha uma opcao de lanche (1-3): ");
    scanf("%i", &opcao);

    switch (opcao) {
        case 1:
            preco = 33.0;
            printf("Voce escolheu X-TUDO.\n");
            break;
        case 2:
            preco = 38.0;
            printf("Voce escolheu XRATAO.\n");
            break;
        case 3:
            preco = 25.0;
            printf("Voce escolheu XSALADA.\n");
            break;
        default:
            printf("Opcao invalida.\n");
            return 0;
    }

    printf("Digite a quantidade desejada: ");
    scanf("%i", &quantidade);

    valorTotal = preco * quantidade;
    printf("Preco: R$ %.2f\n", preco);
    printf("Quantidade: %d\n", quantidade);
    printf("Valor a pagar: R$ %.2f\n", valorTotal);

    return 0;
}

