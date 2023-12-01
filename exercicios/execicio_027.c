/*
8 � Uma importadora importa produtos de v�rios pa�ses. O pre�o do frete varia de acordo com o pa�s seguindo a tabela
abaixo. Fa�a um programa que leia o valor de um produto, o c�digo do pa�s de origem (imprima as op��es de c�digo poss�veis em
um menu), fa�a os c�lculos necess�rios e imprima o valor total do produto mais frete utilizando a tabela abaixo. Informar se uma
op��o inv�lida for informada.

1 Estados Unidos Frete 60,00
2 Fran�a Frete 70,50
3 M�xico Frete 50,00
4 Argentina Frete 27,35
5 China Frete 80,00
*/
// como eu faria

#include <stdio.h>

int main() {
    float valor_produto;
	float frete = 0.0; 
	float valor_total = 0.0;
    int codigo_pais;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    printf("Digite o c�digo do pa�s de origem:\n");
    printf("1 - Estados Unidos\n");
    printf("2 - Fran�a\n");
    printf("3 - M�xico\n");
    printf("4 - Argentina\n");
    printf("5 - China\n");
    scanf("%i", &codigo_pais);

    switch (codigo_pais) {
        case 1:
            frete = 60.00;
            break;
        case 2:
            frete = 70.50;
            break;
        case 3:
            frete = 50.00;
            break;
        case 4:
            frete = 27.35;
            break;
        case 5:
            frete = 80.00;
            break;
        default:
            printf("Op��o inv�lida\n");
            return 0;
    }

    valor_total = valor_produto + frete;
    printf("Valor total do produto mais frete: R$ %.2f\n", valor_total);

    return 0;
}
/*
// com o if

#include <stdio.h>

int main() {
    float valor_produto, frete = 0.0, valor_total = 0.0;
	int codigo_pais;
	
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    printf("Digite o c�digo do pa�s de origem:\n");
    printf("1 - Estados Unidos\n");
    printf("2 - Fran�a\n");
    printf("3 - M�xico\n");
    printf("4 - Argentina\n");
    printf("5 - China\n");
    scanf("%i", &codigo_pais);

    if (codigo_pais == 1) {
        frete = 60.00;
    } else if (codigo_pais == 2) {
        frete = 70.50;
    } else if (codigo_pais == 3) {
        frete = 50.00;
    } else if (codigo_pais == 4) {
        frete = 27.35;
    } else if (codigo_pais == 5) {
        frete = 80.00;
    } else {
        printf("Op��o inv�lida\n");
        return 0;
    }

    valor_total = valor_produto + frete;
    printf("Valor total do produto mais frete: R$ %.2f\n", valor_total);

    return 0;
}
*/
