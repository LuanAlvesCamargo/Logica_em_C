/*
* 5 – Faça um procedimento que receba a idade de um nadador por parâmetro e retorna,
* também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:
*		indade										Caregoria
*		5 a 7 anos									Infantil A
*		8 a 10 anos									Infantil B
*		11 a 13 anos								Juveil A
*		14 a 17 anos								Juveil B
*		Maiores de 18 anos (incluseve)				Adulto
*/

#include <stdio.h>

enum categoria {
  infantil_a,
  infantil_b,
  juvenil_a,
  juvenil_b,
  adulto
};

void classifica_nadador(int idade, enum categoria *categoria) {
  if (idade >= 5 && idade <= 7) {
    *categoria = infantil_a;
  } else if (idade >= 8 && idade <= 10) {
    *categoria = infantil_b;
  } else if (idade >= 11 && idade <= 13) {
    *categoria = juvenil_a;
  } else if (idade >= 14 && idade <= 17) {
    *categoria = juvenil_b;
  } else {
    *categoria = adulto;
  }
}

int main() {
  int idade;
  enum categoria categoria;

  printf("Digite a idade do nadador: ");
  scanf("%i", &idade);

  classifica_nadador(idade, &categoria);

  switch (categoria) {
    case infantil_a:
      printf("Categoria: Infantil A\n");
      break;
    case infantil_b:
      printf("Categoria: Infantil B\n");
      break;
    case juvenil_a:
      printf("Categoria: Juvenil A\n");
      break;
    case juvenil_b:
      printf("Categoria: Juvenil B\n");
      break;
    case adulto:
      printf("Categoria: Adulto\n");
      break;
  }

  return 0;
}
