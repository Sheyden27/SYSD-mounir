#include <stdio.h>
#include <ctype.h>

int main(int argc, char** argv) {
  float nb1, nb2;
  char oprand;
  printf("Entrez deux nombres: ");
  scanf("%f", &nb1);
  printf("Un autre nombre: ");
  scanf("%f", &nb2);
  printf("Entrez une opération à réaliser: ");
  scanf("%s", &oprand);
  float res;
  switch(oprand) {
  case '+':
    res = nb1 + nb2;
    break;
  case '-':
    res = nb1 - nb2;
    break;
  case '*':
    res = nb1 * nb2;
    break;
  case '/':
    res = nb1 / nb2;
    break;
  }
  printf("Le résultat est: %.2f\n", res);
  return 0;
}
