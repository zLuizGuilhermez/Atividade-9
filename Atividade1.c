#include <stdio.h>

int main() {

  int valores[6] = {1, 0, 5, -2, -5, 7}, soma,i;

  soma = valores[0] + valores[1] + valores[5];

  printf("a soma e %d", soma);

  for ( i = 0; i < 6; i++){
    if (i == 4) {
      valores[i] = 100;
    }
    printf("\n Os numeros que estao na variavel e: %d", valores[i]);
  }
}
