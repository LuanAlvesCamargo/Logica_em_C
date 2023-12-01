/**
* 5 � Elabore um programa que efetue a leitura sucessiva de valores num�ricos e apresente no final o total do somat�rio,
* a m�dia e o total de valores lidos. O programa deve fazer as leituras dos valores enquanto o usu�rio estiver fornecendo valores positivos.
* Ou seja, o programa deve parar, quando o usu�rio digitar um valor negativo.
*/

#include <stdio.h>

int main() {
    int i;
    int somatorio = 0;
    int total_valores = 0;

    do {
        printf("Digite um valor (ou um valor negativo para sair): ");
        scanf("%i", &i);

        if (i >= 0) {
            somatorio += i;
            total_valores++;
        }
    } while (i >= 0);

    if (total_valores > 0) {
        float media = (float)somatorio / total_valores;

        printf("Total de Valores Lidos: %i\n", total_valores);
        printf("Somatorio dos Valores: %i\n", somatorio);
        printf("Media dos Valores: %.2f\n", media);
    } else {
        printf("Nenhum valor positivo foi inserido.\n");
    }

    return 0;
}

