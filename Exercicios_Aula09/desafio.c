/*
* Fazer um programa que:
* Leia id, nome e cargo de 5 funcion�rios
* Leia id, nome e cidade de 5 clientes
* Leia id, nome e pre�o de 10 produtos
* Leia o id do funcion�rio e mostre os dados do funcion�rio que vez a venda
* Leia o id do cliente e mostre os dados do cliente que fez a compra
* Leia o id e a quantidade de 3 produtos e mostre os dados do produto vendido, calculando e mostrando o subtotal e acumulando o
* valor total.
* Em qualquer uma das leituras acima, caso n�o encontrar cancelar a execu��o do programa
* Mostrar o valor total a pagar
* Mostrar um menu com 3 op��es de pagamento
* Ler a op��o de pagamento, fazer o(s) c�lculo(s) e informar o valor a pagar
* Em caso de forma de pagamento inv�lida, cancelar a execu��o do programa
* Ler o valor pago e informar o troco
* Em caso de valor insuficiente, cancelar a execu��o do programa
* Verificar a possibilidade de uma nova venda com os dados j� lidos
* Certifique-se de incluir valida��es e tratamento de erros adequados para tornar o programa mais robusto.
*/

#include <stdio.h>
#include <string.h>

struct Funcionario {
    int id;
    char nome[100];
    char cargo[100];
};

struct Cliente {
    int id;
    char nome[100];
    char cidade[100];
};

struct Produto {
    int id;
    char nome[100];
    double preco;
};

int main() {
    struct Funcionario funcionarios[5];
    struct Cliente clientes[5];
    struct Produto produtos[10];
    int idVenda;
    int idCompra;
    int idProduto;
    int quantidade;
    int i = 0;
    float subtotal = 0.0;
    float valorTotal = 0.0;

    for (i = 0; i < 5; i++) {
        printf("Informe o ID do funcionario: ", i + 1);
        scanf("%i", &funcionarios[i].id);
        printf("Informe o nome do funcionario: ", i + 1);
        scanf(" %[^\n]", funcionarios[i].nome);
        printf("Informe o cargo do funcion�rio: ", i + 1);
        scanf(" %[^\n]", funcionarios[i].cargo);
    }

    for (i = 0; i < 5; i++) {
        printf("Informe o ID do cliente: ", i + 1);
        scanf("%i", &clientes[i].id);
        printf("Informe o nome do cliente: ", i + 1);
        scanf(" %[^\n]", clientes[i].nome);
        printf("Informe a cidade do cliente: ", i + 1);
        scanf(" %[^\n]", clientes[i].cidade);
    }

    for (i = 0; i < 10; i++) {
        printf("Informe o ID do produto: ", i + 1);
        scanf("%i", &produtos[i].id);
        printf("Informe o nome do produto: ", i + 1);
        scanf(" %[^\n]", produtos[i].nome);
        printf("Informe o pre�o do produto: ", i + 1);
        scanf("%f", &produtos[i].preco);
    }

    printf("Informe o ID do funcion�rio que fez a venda: ");
    scanf("%i", &idVenda);

    for (i = 0; i < 5; i++) {
        if (funcionarios[i].id == idVenda) {
            printf("Dados do funcion�rio que fez a venda:\n");
            printf("ID: %i\n", funcionarios[i].id);
            printf("Nome: %s\n", funcionarios[i].nome);
            printf("Cargo: %s\n", funcionarios[i].cargo);
            break;
        }
        if (i == 4) {
            printf("Funcion�rio n�o encontrado. Cancelando a execu��o.\n");
            return 1;
        }
    }

    printf("Informe o ID do cliente que fez a compra: ");
    scanf("%i", &idCompra);

    for (i = 0; i < 5; i++) {
        if (clientes[i].id == idCompra) {
            printf("Dados do cliente que fez a compra:\n");
            printf("ID: %i\n", clientes[i].id);
            printf("Nome: %s\n", clientes[i].nome);
            printf("Cidade: %s\n", clientes[i].cidade);
            break;
        }
        if (i == 4) {
            printf("Cliente n�o encontrado. Cancelando a execu��o.\n");
            return 1;
        }
    }

    printf("Informe o ID do produto vendido: ");
    scanf("%i", &idProduto);

    for (i = 0; i < 10; i++) {
        if (produtos[i].id == idProduto) {
            printf("Informe a quantidade vendida: ");
            scanf("%i", &quantidade);
            if (quantidade < 0) {
                printf("Quantidade inv�lida. Cancelando a execu��o.\n");
                return 1;
            }
            subtotal = produtos[i].preco * quantidade;
            valorTotal += subtotal;
            printf("Produto: %s\n", produtos[i].nome);
            printf("Pre�o unit�rio: %.2f\n", produtos[i].preco);
            printf("Quantidade: %i\n", quantidade);
            printf("Subtotal: %.2f\n", subtotal);
            printf("Valor total acumulado: %.2f\n", valorTotal);
            break;
        }
        if (i == 9) {
            printf("Produto n�o encontrado. Cancelando a execu��o.\n");
            return 1;
        }
    }

    int opcaoPagamento;
    double valorPago;
    double troco;

    printf("Valor total a pagar: %.2f\n", valorTotal);
    printf("Escolha uma op��o de pagamento:\n");
    printf("1 - Dinheiro\n");
    printf("2 - Cart�o de Cr�dito\n");
    printf("3 - Cart�o de D�bito\n");
    scanf("%d", &opcaoPagamento);

    switch (opcaoPagamento) {
        case 1:
            printf("Informe o valor pago: ");
            scanf("%lf", &valorPago);
            if (valorPago < valorTotal) {
                printf("Valor insuficiente. Cancelando a execu��o.\n");
                return 1;
            }
            troco = valorPago - valorTotal;
            printf("Troco: %.2lf\n", troco);
            break;
        case 2:
            printf("Pagamento com cart�o de cr�dito aprovado.\n");
            break;
        case 3:
            printf("Pagamento com cart�o de d�bito aprovado.\n");
            break;
        default:
            printf("Op��o de pagamento inv�lida. Cancelando a execu��o.\n");
            return 1;
    }

    char novaVenda;
    printf("Deseja fazer uma nova venda? (S para sim, qualquer tecla para n�o): ");
    scanf(" %c", &novaVenda);

    if (novaVenda == 'S' || novaVenda == 's') {
        main();
    }

    return 0; // Sa�da sem erro
}

