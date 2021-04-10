#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int nb;
  int secret;
  char name[100];
  int max = 100;
  int tries = 1;
  int guesses[100];
  int len = 0;

  printf("\nEntrez votre nom: ");
  scanf("%s", &name);
  printf("Bonjour, %s\n", name);
  srand(time(NULL));
  secret = rand() % max + 1;
  printf("Le nombre est compris entre 1 et %d\n\n", max);
  
  for (int i = 0; i < 100; i++) {
    printf("Entrez un nombre: ");
    scanf("%d", &nb);
    if (nb > secret) {
      printf("Non, c'est plus petit\n\n");
      tries++;
      guesses[len] = nb;
      len++;
    }
    else if (nb < secret) {
      printf("Non, c'est plus grand\n\n");
      tries++;
      guesses[len] = nb;
      len++;
    }
    else {
      printf("\nVous avez gagné ! Le nombre était: %d\n", secret);
      if (tries > 1) {
	printf("Vous avez trouvé en: %d coups !\n", tries);
	printf("Vous avez essayé: ");
	for (int i = 0; i < tries - 1; i++) {
	  printf("%d ", guesses[i]);
	}
	printf("\n");
      }
      else {
	printf("Vous avez trouvé en 1 coup !!\n");
      }
      printf("\n");
      return 0;
    }
  }
  printf("Perdu ! Le nombre était %d", secret);
  return 0;
}
