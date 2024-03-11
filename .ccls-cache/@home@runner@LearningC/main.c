#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int c = 0, voto, vJ = 0, vM = 0, vN = 0, maior, vencedor;
  float pvN;

  while (c < 8) {
    printf("Informe seu voto:\n");
    printf("1 - Joao\n");
    printf("2 - Maria\n");
    printf("3 - Nulo\n");
    printf("\nSua escolha: ");
    scanf("%d", &voto);

    switch (voto) {
    case 1:
      vJ++;
      break;
    case 2:
      vM++;
      break;
    case 3:
      vN++;
      break;
    }
    printf("\n------------------\n");
    c++;
  }

  ((vJ) > (vM) ? (maior = vJ) : (maior = vM));
  vencedor = maior;

  pvN = (vN / 8.0) * 100;
  // Nulo nao e um candidato.
  printf("(%d)Joao  (%d)Maria  (%d)Nulo\n", vJ, vM, vN);
  printf("Vencedor: (%d)\n", vencedor);
  printf("(%.1f%%)Votos nulos\n", pvN);
}