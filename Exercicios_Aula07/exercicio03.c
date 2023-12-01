/*
* 3 - Elabore um programa que leia o n�mero de horas trabalhadas de 10 oper�rios. 
* Calcule o sal�rio a receber sabendo-se que os oper�rios ganham R$ 10,00 por hora. 
* Se o n�mero de horas trabalhadas pelo oper�rio exceder a 50 horas, 
* calcule o excesso pagando R$ 20,00 por hora a mais que as 50 horas. Mostrar o sal�rio a receber pelos 10 oper�rios.
*/

#include <stdio.h>

int main() {
    int numOperarios = 10, i;
    double salarioPorHora = 10.0;
    double salarioTotal = 0.0;

    for (i = 1; i <= numOperarios; i++) {
        int horasTrabalhadas;
        float salarioOperario;

        printf("Informe o numero de horas trabalhadas pelo operario %i: ", i);
        scanf("%i", &horasTrabalhadas);

        if (horasTrabalhadas <= 50) {
            salarioOperario = horasTrabalhadas * salarioPorHora;
        } else {
            int horasExtras = horasTrabalhadas - 50;
            salarioOperario = (50 * salarioPorHora) + (horasExtras * 20.0);
        }

        printf("Salario a receber pelo operario: R$ %.2f\n", i, salarioOperario);

        salarioTotal += salarioOperario;
    }

    printf("Salario total a ser pago aos oper�rios: R$ %.2f\n", numOperarios, salarioTotal);

    return 0;
}
