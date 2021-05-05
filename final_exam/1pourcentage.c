#include <stdio.h>

float substract(float price, float percent) {
  int toRemove;
  toRemove = (price * percent) / 100;
  price = price - toRemove;
  return price;
}

float add (float price, float percent) {
  price = price + ((price * percent) / 100);
  return price;
}

int main (void) {
  char oprand;
  float price;
  float percent;
  float result;

  printf("\nEntrez une opération à effectuer (- ou +): ");
  scanf("%c", &oprand);
  if (oprand == '+') {
    printf("Entrez le prix de base: ");
    scanf("%f", &price);
    if (!(float)price) {
      printf("Vous n'avez pas entré un nombre valide\n");
      return 64;
    }
    printf("Entrez le pourcentage d'augmentation (sans le signe %): ");
    scanf("%f", &percent);
    if (!(float)percent) {
      printf("Vous n'avez pas entré un nombre valide\n");
      return 63;
    }
    
    result = add(price, percent);
    printf("Le prix final est de: %.2f\n\n", result);
  }
  if (oprand == '-') {
    printf("Entrez le prix de base: ");
    scanf("%f", &price);
    if (!(float)price) {
      printf("Vous n'avez pas entré un nombre valide\n");
      return 64;
    }
    printf("Entrez le pourcentage de diminution (sans le signe %): ");
    scanf("%f", &percent);
    if (!(float)percent) {
      printf("Vous n'avez pas entré un nombre valide\n");
      return 63;
    }
    result = substract(price, percent);
    printf("Le prix final est de: %.2f\n\n", result);
  } else if (oprand != '+' && oprand != '-') {
    printf("Vous n'avez pas entré le signe + ou -.\n\n");
  }
  return 0;
}
