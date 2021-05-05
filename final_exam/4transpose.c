#include<stdio.h>
#include<stdlib.h>

void transpose(int array[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int n = 0; n < 3; n++) {
      printf("%d ", array[n][i]);
    }
    printf("\n");
  }
}

int main() {
    int tableau1[3][3] = { {1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9} };
    int i,j;

    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", tableau1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    transpose(tableau1);
}
