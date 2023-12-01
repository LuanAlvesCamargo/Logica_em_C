/*
* 9 – Fazer um programa de leia idade, peso e altura de 12 pessoas.
* Criar as funções 1 Mostra a idade do mais velho 2 Mostra o peso do mais leve e 3
* Mostra a altura com o índice invertido ou seja do último para o primeiro.
*/

int main() {

  int idade[12];
  float peso[12];
  float altura[12];
  int i;

  for (i = 0; i < 12; i++) {
    printf("Digite a idade da pessoa %i: ", i + 1);
    scanf("%f", &idade[i]);

    printf("Digite o peso da pessoa %i: ", i + 1);
    scanf("%f", &peso[i]);

    printf("Digite a altura da pessoa %i: ", i + 1);
    scanf("%f", &altura[i]);
  }

  mostra_idade_mais_velho();
  mostra_peso_mais_leve();
  mostra_altura_invertida();

  return 0;
}

void mostra_idade_mais_velho() {

  int idade_mais_velho = 0;
	
  for (i = 0; i < 12; i++) {
    if (idade[i] > idade_mais_velho) {
      idade_mais_velho = idade[i];
    }
  }


  printf("A idade do mais velho e %i\n", idade_mais_velho);
}

void mostra_peso_mais_leve() {

  float peso_mais_leve = 99999.99;

  for (int i = 0; i < 12; i++) {
    if (peso[i] < peso_mais_leve) {
      peso_mais_leve = peso[i];
    }
  }

  printf("O peso do mais leve e %.2f\n", peso_mais_leve);
}

void mostra_altura_invertida() {

  int i = 11;

  while (i >= 0) {
    printf("A altura da pessoa %i é %.2f\n", i, altura[i]);
    i--;
  }
}
