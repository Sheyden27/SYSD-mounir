#include <stdio.h>

int main(void) {
  int nb;
  char* str;
  
  printf("Entre un nombre bg: ");
  scanf("%d", &nb);

  while (nb) {
    printf("%d\n", nb % 10);
    nb /= 10;
  }
  return 0;
}
