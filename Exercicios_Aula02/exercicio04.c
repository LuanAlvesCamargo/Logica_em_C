/**
* 4 – Fazer um programa que leia o salário de um funcionário
* Mostre um menu com cargos
* 1 – Analista de sistemas
* 2 – Programador
* 3 – Operador de sistemas
* Acesse o cargo
* Se cargo invalido e sim cancele a execução do programa
* Verifique e calcule:
* Cargo 1 calcule aumento de 10% + 100,00
* Cargo 2 calcule aumento de 15% + 200,00
* Cargo 3 calcule aumento de 25% + 50,00
* Mostre o salário, o cargo e o novo salário do funcionário
* O programa DEVE ser desenvolvido seguindo TODAS as solicitações acima.
*/

#include <stdio.h>

int main() {
    float salario;
    int cargo;
    float novo_salario;

    printf("Digite o salário do funcionário: ");
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
            printf("Cargo inválido. Programa cancelado.\n");
            return 0;
    }

    printf("Salário anterior: R$%.2f\n", salario);
    printf("Cargo: %d\n", cargo);
    printf("Novo salário: R$%.2f\n", novo_salario);

    return 0;
}

