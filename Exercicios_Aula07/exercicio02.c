/*
* 2 � Elabore um programa que leia o n�mero de horas trabalhadas e o sal�rio por hora de 10 funcion�rios. 
* Fa�a o c�lculos necess�rios e informe o sal�rio a receber pelos 10 funcion�rios.
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
