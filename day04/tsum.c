#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  long double nb, res = 0;
  for (int i = 0; i < argc; i++) {
    res += strtold(argv[i], NULL);
  }
  printf("La somme des nombres est: %.2Lf\n", res);
  return 0;
}
