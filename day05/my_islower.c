#include <stdio.h>

int my_strlen(char *str);

int my_islower(char *str) {
  int end = my_strlen(str);
  for (int i = 0; i < end;) {
    if (str[i] > 'a' && str[i] < 'z') {
      i++;
    }
    else return 0;
  }
  return -1;
}

int main(void) {
  char *str = "Hello";
  char *str2 = "hello";
  printf("%d \n%d\n", my_islower(str), my_islower(str2));
  return 0;
}
