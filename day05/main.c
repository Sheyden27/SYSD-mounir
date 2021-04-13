#include <stdio.h>

int my_strlen(char *str);

int main(void) {
  char *str = "Hello";
  printf("Taille de '%s': %d\n", str, my_strlen(str));
}
