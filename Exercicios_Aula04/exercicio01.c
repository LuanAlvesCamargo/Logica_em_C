/**
 * 1 � Fazer um programa que leia o valor das �ltimas 5 contas de luz, 
 * �gua e telefone. Fa�a os c�lculos e informe o valor total e o valor m�dio de cada conta 
*/

#include <stdio.h>

int main() {
    int i = 1;
    float totalLuz = 0, totalAgua = 0, totalFone = 0;
    float contaLuz, contaAgua, contaFone;
    
    while (i <= 5) {
        printf("Informe o valor da conta de luz: ", i);
        scanf("%f", &contaLuz);
        
        printf("Informe o valor da conta de agua: ", i);
        scanf("%f", &contaAgua);
        
        printf("Informe o valor da conta de telefone: ", i);
        scanf("%f", &contaFone);
        
        totalLuz += contaLuz;
        totalAgua += contaAgua;
        totalFone += contaFone;
        
        i++;
    }
    
    float mediaLuz = totalLuz/5;
    float mediaAgua = totalAgua/5;
    float mediaFone = totalFone/5;
    
    printf("\nValor total de contas de luz: %.2f\n", totalLuz);
    printf("Valor total de contas de agua: %.2f\n", totalAgua);
    printf("Valor total de contas de telefone: %.2f\n", totalFone);
    
    printf("\nValor medio de contas de luz: %.2f\n", mediaLuz);
    printf("Valor medio de contas de agua: %.2f\n", mediaAgua);
    printf("Valor medio de contas de telefone: %.2f\n", mediaFone);
    
    return 0;
}

