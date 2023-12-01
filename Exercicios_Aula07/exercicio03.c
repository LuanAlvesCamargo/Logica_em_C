/*
* 3 - Elabore um programa que leia o número de horas trabalhadas de 10 operários. 
* Calcule o salário a receber sabendo-se que os operários ganham R$ 10,00 por hora. 
* Se o número de horas trabalhadas pelo operário exceder a 50 horas, 
* calcule o excesso pagando R$ 20,00 por hora a mais que as 50 horas. Mostrar o salário a receber pelos 10 operários.
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

    printf("Salario total a ser pago aos operários: R$ %.2f\n", numOperarios, salarioTotal);

    return 0;
}
