/*
* 8 – Fazer um programa que utilizando Vetor leia a idade de 12 pessoas. 
* Criar as funções 1 Mostra todas as idades 2 Mostra a média das idades 3
* Mostra somente as idades de índice ímpar.
*/

#include <stdio.h>
int idades[12];

// Função para ler a idade de uma pessoa
void lerIdade(int indice) {
  printf("Digite a idade da pessoa %i: ", indice + 1);
  scanf("%i", &idades[indice]);
}

// Função para mostrar todas as idades
void mostrarIdades() {
	int i;
	
  for (i = 0; i < 12; i++) {
    printf("Idade da pessoa %i: %i\n", i + 1, idades[i]);
  }
}

// Função para calcular a média das idades
float calcularMedia() {
  int soma = 0;
  int i;
  
  for (i = 0; i < 12; i++) {
    soma += idades[i];
  }
  return soma / 12.0;
}

// Função para mostrar as idades de índice ímpar
void mostrarIdadesImpares() {
	int i;
	
  for (i = 0; i < 12; i++) {
    if (i % 2 == 1) {
      printf("Idade da pessoa %i: %i\n", i + 1, idades[i]);
    }
  }
}

int main() {
  for (int i = 0; i < 12; i++) {
    lerIdade(i);
  }

  printf("Escolha uma opçao:\n");
  printf("1 - Mostrar todas as idades\n");
  printf("2 - Mostrar a media das idades\n");
  printf("3 - Mostrar as idades de indice ímpar\n");

  int opcao;
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      mostrarIdades();
      break;
    case 2:
      printf("A media das idades e: %.2f\n", calcularMedia());
      break;
    case 3:
      mostrarIdadesImpares();
      break;
    default:
      printf("Opção invalida.\n");
  }

  return 0;
}
