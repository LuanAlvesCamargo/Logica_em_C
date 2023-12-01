/*
* 4 – Crie uma função que resolva o problema a seguir: Um professor, 
* muito legal, fez 3 provas durante um semestre mas só vai levar em conta as duas
* notas mais altas para calcular a média.
* Faça uma aplicação em C que peça o valor das 3 notas, mostre como seria a média com essas 3 provas, a
* média com as 2 notas mais altas, bem como sua nota mais alta e sua nota mais baixa.
*/

#include <stdio.h>

float media_ponderada(float nota1, float nota2, float nota3) {
  return (nota1 + nota2 + nota3) / 3;
}

float media_duas_notas_mais_altas(float nota1, float nota2, float nota3) {
  float notas_ordenadas[3];
  int i;

  for (i = 0; i < 3; i++) {
    notas_ordenadas[i] = nota1;
  }
  for (i = 1; i < 3; i++) {
    if (notas_ordenadas[i] < notas_ordenadas[i - 1]) {
      float aux = notas_ordenadas[i];
      notas_ordenadas[i] = notas_ordenadas[i - 1];
      notas_ordenadas[i - 1] = aux;
    }
  }

  return (notas_ordenadas[0] + notas_ordenadas[1]) / 2;
}

int main() {
  float nota1, nota2, nota3;

  // Lê as notas do usuário
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);
  printf("Digite a terceira nota: ");
  scanf("%f", &nota3);

  // Calcula as médias
  float media_tres_notas = media_ponderada(nota1, nota2, nota3);
  float media_duas_notas_mais_altas = media_duas_notas_mais_altas(nota1, nota2, nota3);

  // Imprime os resultados
  printf("Media com as tres notas: %.2f\n", media_tres_notas);
  printf("Media com as duas notas mais altas: %.2f\n", media_duas_notas_mais_altas);
  printf("Nota mais alta: %.2f\n", notas_ordenadas[2]);
  printf("Nota mais baixa: %.2f\n", notas_ordenadas[0]);

  return 0;
}
