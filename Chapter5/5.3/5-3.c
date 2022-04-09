#include "auxi.h"
#include <stdio.h>

int RemoveDuplicates(int arr[], int size) {
  QuickSort(arr, size);
  int j = 0;
  for (int i = 1; i < size; i++) {
    if (arr[i] != arr[j]) {
      arr[++j] = arr[i];
    }
  }
  return j + 1;
}

int main(void) {
  int arr[] = {1, 3, 5, 7, 9, 9, 7, 5, 3, 1};
  printf("%d\n", RemoveDuplicates(arr, sizeof(arr) / sizeof(int)));
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
