#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char** argv) {
  if (argc > 3) {
    float nb1 = strtof(argv[1], NULL);
    float nb2 = strtof(argv[2], NULL);
    float res;
    char oprand = argv[3][0];
    switch(oprand) {
    case '+':
      res = nb1 + nb2;
      break;
    case '-':
      res = nb1 - nb2;
      break;
    case 'x':
      res = nb1 * nb2;
      break;
    case '/':
      res = nb1 / nb2;
      break;
    }
    printf("Le résultat est: %.2f\n", res);
  }
  else {
    printf("Vous n'avez pas entré le bon nombre d'arguments\n");
  }
  return 0;
}
