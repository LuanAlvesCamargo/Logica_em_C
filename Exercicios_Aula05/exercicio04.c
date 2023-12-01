/**
* 4 � Crie um programa que leia o sal�rio dos funcion�rios. Os sal�rios devem ser acumulados e os funcion�rios devem ser contados.
* O programa vai ler o sal�rio at� que um sal�rio = 0 seja encontrado. Informar total de sal�rio, total de funcion�rios e m�dia salarial.
*/

#include <stdio.h>

int main() {
    float salario, totalSalario = 0;
    int totalFuncionarios = 0;

    do {
        printf("Digite o salario do funcionario (ou 0 para encerrar): ");
        scanf("%f", &salario);

        if (salario > 0) {
            totalSalario += salario;
            totalFuncionarios++;
        }
    } while (salario != 0);

    if (totalFuncionarios > 0) {
        float mediaSalarial = totalSalario / totalFuncionarios;
        printf("Total de salario: R$%.2f\n", totalSalario);
        printf("Total de funcionarios: %d\n", totalFuncionarios);
        printf("Media salarial: R$%.2f\n", mediaSalarial);
    } else {
        printf("Nenhum salario foi inserido.\n");
    }

    return 0;
}

