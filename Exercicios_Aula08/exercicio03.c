/*
* 3 � Utilizando Struct, escreva um programa que leia o id,
* o nome e o sal�rio de 8 funcion�rios e, em seguida, pergunte ao usu�rio por um id.
* O programa deve verificar se o id existe no vetor e informar se foi encontrado ou n�o. 
* Se foi encontrado mostrar o nome e o sal�rio do funcion�rio, sen�o mostrar mensagem informando o erro.
*/

#include <stdio.h>
#include <string.h>

struct Funcionario {
    int id;
    char nome[50];
    float salario;
};

int main() {
    struct Funcionario funcionarios[8];
    int idProcurado, i = 0, encontrado = 0;

    for (i = 0; i < 8; i++) {
        printf("Informe o ID do funcionario %i: ", i + 1);
        scanf("%i", &funcionarios[i].id);
        printf("Informe o nome do funcionario %i: ", i + 1);
        scanf("%s", funcionarios[i].nome); // Usando %s para ler uma string (nome)
        printf("Informe o salario do funcionario %i: ", i + 1);
        scanf("%f", &funcionarios[i].salario);
    }

    printf("Informe o ID a ser procurado: ");
    scanf("%i", &idProcurado);

    for (i = 0; i < 8; i++) {
        if (funcionarios[i].id == idProcurado) {
            printf("Funcion�rio encontrado:\n");
            printf("Nome: %s\n", funcionarios[i].nome);
            printf("Sal�rio: %.2f\n", funcionarios[i].salario);
            encontrado = 1; 
            break;
        }
    }

    if (!encontrado) {
        printf("ID n�o encontrado.\n");
    }

    return 0;
}

