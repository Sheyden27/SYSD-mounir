#include <stdio.h>

int my_strlen(char *str) {
  int length = 0;
  int i = 0;

  while (str[i] != '\0') {
    i++;
    length++;
  }
  
  return length;
}

int palindrome (char *str) {
  int reverse;
  int cpt;
  int f_strlen;

  f_strlen = my_strlen(str);
  reverse = f_strlen - 1;
  
  for (int i = 0; i < f_strlen && reverse > 0; ) {
    if (str[i] == str[reverse]) {
      i++;
      reverse--;
    }
    else if (str[i] != str[reverse]) {
      return 0;
    }
  }
  return 1;
}

int main (void) {
  char str[20];
  int result;
  
  printf("\nEntrez une chaine de caractère, nous allons tester si c'est un palindrome: ");
  scanf("%s", str);

  result = palindrome(str);
  if (result == 1) {
    printf("Votre mot est bien un palindrome !\n\n");
  }
  else if (result == 0) {
    printf("Votre mot n'est pas un palindrome..\n\n");
  }
  return 0;
}
