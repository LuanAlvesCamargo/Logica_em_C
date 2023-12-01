/*
* 3 � Crie uma fun��o que receba um n�mero de 1 a 7 e retorne o dia da semana por extenso
*/

#include <stdio.h>

char* dia_da_semana(int dia) {
    switch(dia) {
        case 1:
            return "Domingo";
        case 2:
            return "Segunda-feira";
        case 3:
            return "Ter�a-feira";
        case 4:
            return "Quarta-feira";
        case 5:
            return "Quinta-feira";
        case 6:
            return "Sexta-feira";
        case 7:
            return "Sabado";
        default:
            return "Numero invalido";
    }
}

int main() {
    int dia = 3;
    printf("O dia %i e %s.\n", dia, dia_da_semana(dia));
    return 0;
}
