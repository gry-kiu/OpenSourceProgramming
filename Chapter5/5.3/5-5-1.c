#include "auxi.h"
#include <stdio.h>

void MissingValues(int arr[], int size) {
  QuickSort(arr, size);
  printf("min: %d\n", arr[0]);
  printf("max: %d\n", arr[size - 1]);
  printf("missing: ");
  int value = arr[0] + 1;
  int i = 1;
  while (i < size) {
    if (arr[i] == value) {
      value++;
      i++;
    } else {
      printf("%d\n", value);
      value++;
    }
  }
}

int main(void) {
  int arr[] = {2, 4, 8, 10, 1, 3, 5, 7, 9};
  MissingValues(arr, sizeof(arr) / sizeof(int));
  return 0;
}
