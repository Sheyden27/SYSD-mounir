#include <stdio.h>

int my_strlen(char *str);

int my_isupper(char *str) {
  int end = my_strlen(str);
  for (int i = 0; i < end;) {
    if (str[i] > 'A' && str[i] < 'Z') {
      i++;
    }
    else return 0;
  }
  return -1;
}

int main(void) {
  char *str = "Hello";
  char *str2 = "HELLO";
  printf("%d \n%d\n", my_isupper(str), my_isupper(str2));
  return 0;
}
