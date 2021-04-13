#include <string.h>
#include <stdio.h>

int main(void) {
  char* str = "salut bjr";
  char* p;

  p = str;
  while (*p != '\0') {
    printf("%c\n", *p);
    p++;
  }
  return 0;
}
