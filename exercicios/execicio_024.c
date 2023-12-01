/*
24 � Em uma loja de CD�s existem apenas quatro tipos de pre�os que est�o associados a cores.
Assim os CD�s que ficam na loja n�o s�o marcados por pre�os e sim por cores.
Desenvolva um programa que a partir a entrada do  �digo de cada cor e da quantidade desejada, 
o software mostre o pre�o e a quantidade do cd escolhido e o valor a pagar. 
A loja est� atualmente com a seguinte tabela de pre�os.

Cor 	Pre�o
1 para Verde 10,00
2 para Azul 20,00
3 para Amarelo 30,00
4 para Vermelho 40,00
*/

// como eu faria 
#include <stdio.h>

int main() {
    int cor, quantidade;
    float preco, valor_pagar;

    printf("Selecione a cor do CD:\n");
    printf("1 - Verde\n");
    printf("2 - Azul\n");
    printf("3 - Amarelo\n");
    printf("4 - Vermelho\n");
    printf("Digite o c�digo da cor: ");
    scanf("%d", &cor);

    printf("Digite a quantidade desejada: ");
    scanf("%i", &quantidade);

    switch (cor) {
        case 1:
            preco = 10.00;
            break;
        case 2:
            preco = 20.00;
            break;
        case 3:
            preco = 30.00;
            break;
        case 4:
            preco = 40.00;
            break;
        default:
            printf("C�digo de cor inv�lido!\n");
            return 1;
    }

    valor_pagar = preco * quantidade;

    printf("Pre�o: R$ %.2f\n", preco);
    printf("Quantidade: %i\n", quantidade);
    printf("Valor a pagar: R$ %.2f\n", valor_pagar);

    return 0;
}

// com o if
/*
#include <stdio.h>

int main() {
    int codigo_cor, quantidade;
    float preco_unitario, valor_total;

    printf("Digite o c�digo da cor do CD:\n");
    printf("1 - Verde\n");
    printf("2 - Azul\n");
    printf("3 - Amarelo\n");
    printf("4 - Vermelho\n");
    scanf("%d", &codigo_cor);

    printf("Digite a quantidade desejada: ");
    scanf("%i", &quantidade);

    if (codigo_cor == 1) {
        preco_unitario = 10.00;
    } else if (codigo_cor == 2) {
        preco_unitario = 20.00;
    } else if (codigo_cor == 3) {
        preco_unitario = 30.00;
    } else if (codigo_cor == 4) {
        preco_unitario = 40.00;
    } else {
        printf("C�digo de cor inv�lido\n");
        return 0;
    }

    valor_total = preco_unitario * quantidade;

    printf("Pre�o unit�rio: R$ %.2f\n", preco_unitario);
    printf("Quantidade: %i\n", quantidade);
    printf("Valor total a pagar: R$ %.2f\n", valor_total);

    return 0;
}
*/
