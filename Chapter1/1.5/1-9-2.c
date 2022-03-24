#include <stdio.h>
#include <stdlib.h>

int SmallestPositiveMissingNumber(int arr[], int size) {
  int *aux = (int *)calloc(size, sizeof(int));
  for (int i = 0; i < size; i++) {
    if (arr[i] > 0 && arr[i] <= size) {
      aux[arr[i] - 1] = arr[i];
    }
  }
  for (int i = 0; i < size; i++) {
    if (aux[i] != i + 1) {
      return i + 1;
    }
  }
  free(aux);
  return -1;
}

int main(void) {
  int arr[] = {8, -1, 6, 1, 9, 3, 2, 7, 4, -1};
  printf("%d\n", SmallestPositiveMissingNumber(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
