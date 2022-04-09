#include "auxi.h"
#include <stdio.h>

void PrintRepeating(int arr[], int size) {
  QuickSort(arr, size);
  for (int i = 1; i < size; i++) {
    if (arr[i] == arr[i - 1]) {
      printf("%d ", arr[i]);
    }
  }
  printf("\n");
}

int main(void) {
  int arr[] = {1, 3, 5, 7, 9, 9, 7, 5, 3, 1};
  PrintRepeating(arr, sizeof(arr) / sizeof(int));
  return 0;
}
