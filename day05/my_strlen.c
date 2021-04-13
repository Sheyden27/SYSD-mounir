#include <stdio.h>

int my_strlen(char* str) {
  int nb;
  for (int i = 0; str[i] != '\0'; i++) {
    nb++;
  }
  return nb;
}

int main(void) {
  char *str = "Hello";
  printf("Taille de '%s': %d\n", str, my_strlen(str));
}
