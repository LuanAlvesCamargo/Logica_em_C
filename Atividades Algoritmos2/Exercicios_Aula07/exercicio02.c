/*
* 2 – Elabore um programa que leia o número de horas trabalhadas e o salário por hora de 10 funcionários. 
* Faça o cálculos necessários e informe o salário a receber pelos 10 funcionários.
*/

#include <stdio.h>

int main() {
    int numFuncionarios = 10, i;
    float horasTrabalhadas, salarioPorHora, salarioRecebido;

    printf("Informe o numero de horas trabalhadas e o salario por hora para cada funcionario:\n");

    for (i = 1; i <= numFuncionarios; i++) {
        printf("Funcionario %i:\n", i);
        
        printf("Horas trabalhadas: ");
        scanf("%f", &horasTrabalhadas);

        printf("Salario por hora: ");
        scanf("%f", &salarioPorHora);

        salarioRecebido = horasTrabalhadas * salarioPorHora;

        printf("Salario a receber: %.2f\n", salarioRecebido);

        while (getchar() != '\n');

        printf("\n");
    }

    return 0;
}
