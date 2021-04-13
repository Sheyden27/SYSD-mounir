#include <stdio.h>

int* tri(int array[], int size) {
  int c;
  for (int i = 0, n = size; i < size; i++, n--) {
    //On regarde si le caractère actuel est plus grand que le prochain
    //Si oui, on les échange
    if (array[i] > array[i+1]) {
      c = array[i+1];
      array[i+1] = array[i];
      array[i] = c;
    }
    //On regarde si le caractère actuel est plus petit que le caractère d'avant
    //Si oui on les échange
    if (array[i] < array[i-1]) {
      c = array[i-1];
      array[i-1] = array[i];
      array[i] = c;
    }
    /* On regarde à partir de la fin de la chaine, si le caractère actuel
       est plus petit que le caractère d'avant, et on parcours la chaine
       à l'envers pour continuer l'opération inverse
    */
    if (array[n] < array[n-1]) {
      c = array[n];
      array[n] = array[n-1];
      array[n-1] = c;
    }
  }
  //On affiche chaque caractère dans le tableau après modifications
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
}

int main(void) {
  int array[] = {12, 31, 5, 42, 10};

  //On exécute la fonction
  tri(array, 5);
  return 0;
}
