#include <stdio.h>

struct City {
  char* str;
  int hab;
  int km;
};

void show(struct City city) {
  printf("La taille de la ville %s est %d km\n", city.str, city.km);
  printf("Le nombre d'habitants de la ville %s est de %d\n", city.str, city.hab);
}

int main(void) {
  struct City city;

  struct City paris = {"Paris", 25252, 150};
  struct City ville = {"Ville", 5000, 5};
  show(ville);
  printf("\n");
  show(paris);
  //printf(km);
  return 0;
}
