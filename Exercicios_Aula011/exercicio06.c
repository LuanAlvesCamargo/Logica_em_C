/*
* 6 – Faça uma função que recebe, por parâmetro,
* a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal. 
* Para homens, calcular o peso ideal
* usando a fórmula peso ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7.
*/

#include <stdio.h>

float calcular_peso_ideal(float alt, char sexo) {
  float peso_ideal;

  if (sexo == 'M' || sexo == 'm') {
    peso_ideal = 72.7 * alt - 58;
  } else {
    peso_ideal = 62.1 * alt - 44.7;
  }

  return peso_ideal;
}

int main() {
  float alt;
  char sexo;

  printf("Digite a altura (em metros): ");
  scanf("%f", &alt);

  printf("Digite o sexo (M ou F): ");
  scanf(" %c", &sexo);

  float peso_ideal = calcular_peso_ideal(alt, sexo);

  printf("O peso ideal para essa pessoa é %.2f kg.\n", peso_ideal);


  return 0;
}
