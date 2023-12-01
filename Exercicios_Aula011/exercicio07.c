/*
* 7 – Fazer um programa que leia o valor de 3 produtos e informe o valor a pagar.
* Mostre um menu com 4 formas de pagamento – 1 para A vista 
* – 2 para a prazo com 5% de juros
* – 3 para pagamento em 6 vezes com 8% de juros e 4 para pagamento em 12 vezes com 12% juros. Criar uma função
* para cada forma de pagamento e informar o novo valor a pagar e os valor das parcelas quando for o caso.
* Este programa só encerra quando a tecla ESC for pressionada.
*/

#include <stdio.h>

// Função para ler o valor de um produto
float ler_valor_produto() {
  float valor;
  printf("Digite o valor do produto: ");
  scanf("%f", &valor);
  return valor;
}

// Função para calcular o valor a pagar à vista
float calcular_valor_a_vista(float valor_produto) {
  return valor_produto;
}

// Função para calcular o valor a pagar a prazo com 5% de juros
float calcular_valor_a_prazo_5_juros(float valor_produto) {
  float juros = valor_produto * 0.05;
  return valor_produto + juros;
}

// Função para calcular o valor a pagar em 6 vezes com 8% de juros
float calcular_valor_em_6_vezes_8_juros(float valor_produto) {
  float juros = valor_produto * 0.08;
  float parcela = (valor_produto + juros) / 6;
  return parcela;
}

// Função para calcular o valor a pagar em 12 vezes com 12% de juros
float calcular_valor_em_12_vezes_12_juros(float valor_produto) {
  float juros = valor_produto * 0.12;
  float parcela = (valor_produto + juros) / 12;
  return parcela;
}

int main() {
  float valor_produto1, valor_produto2, valor_produto3;
  int opcao;

  valor_produto1 = ler_valor_produto();
  valor_produto2 = ler_valor_produto();
  valor_produto3 = ler_valor_produto();

  do {
    system("clear");

    printf("Formas de pagamento:\n");
    printf("1 - a vista\n");
    printf("2 - A prazo com 5% de juros\n");
    printf("3 - Em 6 vezes com 8% de juros\n");
    printf("4 - Em 12 vezes com 12% de juros\n");
    printf("Opcao: ");
    scanf("%i", &opcao);

    switch (opcao) {
	      case 1:
        // Calcula o valor a pagar à vista
        float valor_total = valor_produto1 + valor_produto2 + valor_produto3;
        printf("O valor total a pagar a vista e de R$%.2f.\n", valor_total);
        break;
      case 2:
        // Calcula o valor a pagar a prazo com 5% de juros
        float valor_total = valor_produto1 + valor_produto2 + valor_produto3;
        float valor_a_pagar = calcular_valor_a_prazo_5_juros(valor_total);
        printf("O valor total a pagar a prazo com 5% de juros é de R$%.2f.\n", valor_a_pagar);
        break;
      case 3:
        // Calcula o valor a pagar em 6 vezes com 8% de juros
        float valor_total = valor_produto1 + valor_produto2 + valor_produto3;
        float valor_a_pagar = calcular_valor_em_6_vezes_8_juros(valor_total);
        printf("O valor total a pagar em 6 vezes com 8% de juros é de R$%.2f, sendo R$%.2f por parcela.\n", valor_a_pagar, valor_a_pagar / 6);
        break;
      case 4:
        // Calcula o valor a pagar em 12 vezes com 12% de juros
        float valor_total = valor_produto1 + valor_produto2 + valor_produto3;
        float valor_a_pagar = calcular_valor_em_12_vezes_12
		break;
	}
	
 return 0;
}

