#include <stdio.h>
#include <stdlib.h>

void PrintArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void MaxMinArr(int arr[], int size) {
  int *aux = (int *)malloc(size * sizeof(int));
  for (int i = 0; i < size; i++) {
    aux[i] = arr[i];
  }
  int start = 0, stop = size - 1;
  for (int i = 0; i < size; i++) {
    if (i % 2 == 0) {
      arr[i] = aux[stop];
      stop -= 1;
    } else {
      arr[i] = aux[start];
      start += 1;
    }
  }
  free(aux);
}

int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  MaxMinArr(arr, sizeof(arr) / sizeof(int));
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
