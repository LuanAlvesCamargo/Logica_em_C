/*
* 7 - Fazer um programa que leia a conta de luz, de agua e de telefone dos últimos 3 meses de uma residência. 
* Faça os cálculos e informe o valor total o valor médio gasto com luz, com agua e com telefone. 
* Informe também o valor total gasto.
*/

#include <stdio.h>

int main() {
    float contaLuz[3], contaAgua[3], contaTelefone[3];
    float totalGasto = 0, mediaLuz, mediaAgua, mediaTelefone;
    int i;
    
    printf("Informe as contas dos ultimos 3 meses:\n");
    
    for (i = 0; i < 3; i++) {
        printf("Mes %i:\n", i + 1);
        
        printf("Conta de Luz: ");
        scanf("%f", &contaLuz[i]);
        
        printf("Conta de Agua: ");
        scanf("%f", &contaAgua[i]);
        
        printf("Conta de Telefone: ");
        scanf("%f", &contaTelefone[i]);
        
        totalGasto += contaLuz[i] + contaAgua[i] + contaTelefone[i];
    }
    
    mediaLuz = (contaLuz[0] + contaLuz[1] + contaLuz[2]) / 3;
    mediaAgua = (contaAgua[0] + contaAgua[1] + contaAgua[2]) / 3;
    mediaTelefone = (contaTelefone[0] + contaTelefone[1] + contaTelefone[2]) / 3;
    
    printf("\nResumo dos gastos:\n");
    printf("Valor Total Gasto: %.2lf\n", totalGasto);
    printf("Valor Médio Gasto com Luz: %.2f\n", mediaLuz);
    printf("Valor Médio Gasto com Agua: %.2f\n", mediaAgua);
    printf("Valor Médio Gasto com Telefone: %.2f\n", mediaTelefone);
    
    return 0;
}

