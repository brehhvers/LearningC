#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int idade, gen, c = 0, nM = 0, nH = 0, sM = 0, somaPeso = 0, somaIdade = 0;
  float peso, mH, mM, mediaPeso, mediaIdade, sH = 0;

  while (c < 5) {
    printf("Idade:");
    scanf("%d", &idade);
    printf("Genero(1-fem/2-masc):");
    scanf("%d", &gen);
    printf("Peso:");
    scanf("%f", &peso);
    printf("--------------------\n\n");

    switch (gen) {
    case 1:
      nM++;
      sM += idade;
      break;
    case 2:
      nH++;
      sH += peso;
      break;
    }
    somaPeso += peso;
    somaIdade += idade;
    c++;
  }
  mH = sH / nH;
  mM = sM / nM;
  mediaPeso = somaPeso / 5.0;
  mediaIdade = somaIdade / 5.0;

  printf("(%d)Mulheres (%d)Homens\n", nM, nH);
  printf("(%.2f)Media peso de homens\n", mH);
  printf("(%.0f)Media idade de mulheres\n", mM);
  printf("(%.2f)Media peso  (%.0f)Media idade\n", mediaPeso, mediaIdade);
}