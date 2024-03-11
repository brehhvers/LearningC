#include <stdio.h>

int main(void) {
  int result, fat = 1, num, c;

  printf("Fatorial do numero: ");
  scanf("%d", &num);

  result = num * (num - fat);
  printf("%d x %d = %d\n", num, num-fat, result);

  c = num - 1;
  fat++;

  while(c > 1){
    printf("%d ", result);
    result = result * (num - fat);
    printf("x %d = %d\n", num-fat, result);

    fat++;
    c--;
  }
 

  
}