#include <stdio.h>

int compte_char(char *str, char c) {
  int matches = 0;
  
  for (int i = 0; str[i] != '\0'; i++)
    if (str[i] == c || str[i] == c+32 || str[i] == c-32)
      matches++;
  
  return matches;
}

int main(void) {
  char str[50];
  char c;
  int match;

  printf("\nEntrez une chaine de caractères : ");
  scanf("%s", str);

  printf("Entrez maintenant un caractère à chercher : ");
  scanf(" %c", &c);

  match = compte_char(str, c);
  printf("J'ai trouvé %d fois le caractère '%c' dans la chaine de caractères\n\n", match, c, str);
  
  return 0;
}
