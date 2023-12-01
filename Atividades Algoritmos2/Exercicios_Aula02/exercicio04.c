/**
* 4 � Fazer um programa que leia o sal�rio de um funcion�rio
* Mostre um menu com cargos
* 1 � Analista de sistemas
* 2 � Programador
* 3 � Operador de sistemas
* Acesse o cargo
* Se cargo invalido e sim cancele a execu��o do programa
* Verifique e calcule:
* Cargo 1 calcule aumento de 10% + 100,00
* Cargo 2 calcule aumento de 15% + 200,00
* Cargo 3 calcule aumento de 25% + 50,00
* Mostre o sal�rio, o cargo e o novo sal�rio do funcion�rio
* O programa DEVE ser desenvolvido seguindo TODAS as solicita��es acima.
*/

#include <stdio.h>

int main() {
    float salario;
    int cargo;
    float novo_salario;

    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%f", &salario);

    printf("Escolha o cargo:\n");
    printf("1 - Analista de sistemas\n");
    printf("2 - Programador\n");
    printf("3 - Operador de sistemas\n");
    scanf("%i", &cargo);

    switch (cargo) {
        case 1:
            novo_salario = salario * 0.10 + 100.00;
            break;
        case 2:
            novo_salario = salario * 0.15 + 200.00;
            break;
        case 3:
            novo_salario = salario * 0.25 + 50.00;
            break;
        default:
            printf("Cargo inv�lido. Programa cancelado.\n");
            return 0;
    }

    printf("Sal�rio anterior: R$%.2f\n", salario);
    printf("Cargo: %d\n", cargo);
    printf("Novo sal�rio: R$%.2f\n", novo_salario);

    return 0;
}

