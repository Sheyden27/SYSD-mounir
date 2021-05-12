#include <stdio.h>

float fahrenheit2celsius (float temp) {
  float cel;

  cel = ((temp - 32) * 5/9); 

  return cel;
}

float celsius2fahrenheit (float temp) {
  float fah;

  fah = (1.8 * temp) + 32;

  return fah;
}

int main (void) {
  float degree;
  int choice;

  printf("\nChoisissez une conversion: \n(1 = C à F) (2 = F à C) : ");
  scanf("%d", &choice);
  if (choice == 1) {
    printf("Entrez votre degré celsius: ");
    scanf("%f", &degree);
    degree = celsius2fahrenheit(degree);
    printf("Votre degré convertit en Fahrenheit est égal à : %.2f °F\n\n", degree);
  }
  if (choice == 2) {
    printf("Entrez votre degré fahrenheit: ");
    scanf("%f", &degree);
    degree = fahrenheit2celsius(degree);
    printf("Votre degré convertit en Celsius est égal à : %.2f °C\n\n", degree);
  }
  return 0;
}
