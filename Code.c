#include <stdio.h>

int main(void) {
  int numero;
  // descobrir se o numero é impar ou par
  printf("\t digite o numero: ");

  scanf("%d", &numero);

  if (numero % 2 == 0)
    printf("o numero é par");
  else
    printf("o numero é impar");

  return 0;
}