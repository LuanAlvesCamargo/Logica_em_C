/**
* Fa�a um program que receba o valor do sal�rio m�mico, o n�mero de horas trabalhadas, o n�mero de dependentes do funcion� e a quantidade de horas extras trabalhadas. Calcule e imprima o sal�rio a receber do funcion�rio segunidas as regras abaixo:
*
* O valor da hora trabalhada � igual a 1/5 do m�nimo;
* O sal�rio do m�s � igual ao n�mero dehoras trabalhadas vezes o valor da hora trabalhada;
* Para cada dependente acr�scimo de R$32,00;
* Para cada hora extra trabalhada o c�lculo do valor da hora trabalhada acrescida de 50%;
* O sal�rio bruto � igual ao sal�rio do m�s acrescido dos valores dos dependentes e dos valores das horas extras;
* O c�lculo do valor do imposta de renda retido na fonte segue a tabela abaixo:
*
* IRPF	Sal�ria Bruto
* Isento	inferior a 900
* 10%	De 900 a 1400
* 20%	Superior a 1400
* 
* O Sal�ria l�quido � igual ao sal�rio bruto menos IRPF;
* A gratifica��o segue a pr�xima tabela:
* 
* Sal�rio Liquido	Gratifica��o
* At� 950	R$100,00
* Superior a 950	R$50,00
* 
* O sal�rio a receber do funcion�rio � igual liquido masi a gratifica��o
*/

#include <stdio.h>

int main() {
    float salarioMinimo, horasTrabalhadas, numDependentes, horasExtras;
    float valorHoraTrabalhada, salarioMes, salarioBruto, irpf, salarioLiquido, gratificacao;

    // Receber os valores de entrada
    printf("Informe o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    printf("Informe o numero de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Informe o numero de dependentes: ");
    scanf("%f", &numDependentes);

    printf("Informe a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horasExtras);

    // Calcular o valor da hora trabalhada
    valorHoraTrabalhada = salarioMinimo / 5;

    // Calcular o sal�rio do m�s
    salarioMes = horasTrabalhadas * valorHoraTrabalhada;

    // Calcular acr�scimo para dependentes
    float acrescimoDependentes = numDependentes * 32;

    // Calcular valor das horas extras
    float valorHorasExtras = (valorHoraTrabalhada * 1.5) * horasExtras;

    // Calcular o sal�rio bruto
    salarioBruto = salarioMes + acrescimoDependentes + valorHorasExtras;

    // Calcular IRPF
    if (salarioBruto < 900) {
        irpf = 0;
    } else if (salarioBruto >= 900 && salarioBruto <= 1400) {
        irpf = salarioBruto * 0.10;
    } else {
        irpf = salarioBruto * 0.20;
    }

    // Calcular sal�rio l�quido
    salarioLiquido = salarioBruto - irpf;

    // Calcular gratifica��o
    if (salarioLiquido <= 950) {
        gratificacao = 100;
    } else {
        gratificacao = 50;
    }

    // Calcular sal�rio a receber
    float salarioReceber = salarioLiquido + gratificacao;

    // Imprimir resultado
    printf("Salario a receber do funcionario: R$%.2f\n", salarioReceber);

    return 0;
}
