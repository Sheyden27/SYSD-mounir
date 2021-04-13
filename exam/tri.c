#include <stdio.h>

int* tri(int array[], int size) {
  int c;
  for (int i = 0, n = size; i < size; i++, n--) {
    if (array[i] > array[i+1]) {
      c = array[i+1];
      array[i+1] = array[i];
      array[i] = c;
    }
    if (array[i] < array[i-1]) {
      c = array[i-1];
      array[i-1] = array[i];
      array[i] = c;
    }
    if (array[n] < array[n-1]) {
      c = array[n];
      array[n] = array[n-1];
      array[n-1] = c;
    }
  }
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
}

int main(void) {
  int array[] = {12, 31, 5, 42, 10};

  tri(array, 5);
  return 0;
}
