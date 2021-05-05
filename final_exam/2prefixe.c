#include <stdio.h>

int prefixlength(char *str1, char *str2) {
  int count = 0;
  
  for (int i = 0; str1[i] != '\0' && str2[i] != '\0' && str2[i] == str1[i]; i++) {
    count++;
  }

  printf("\nComparaison entre:  %s  et  %s \n", str1, str2);

  return count;
}


int main (int argc, char **argv) {
  char *str1;
  char *str2;
  int result;

  if (argc == 3) {
    str1 = argv[1];
    str2 = argv[2];
    result = prefixlength(str1, str2);
    printf("Les deux chaines ont %d caractère(s) en commun\n\n", result);
  } else {
    printf("\nVous n'avez pas entré deux chaines de caractères\n\n");
    return 64;
  }
  return 0;
}
