#include "auxi.h"
#include <stdio.h>

void TransformArray(int arr[], int size) {
  int n = size / 2;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {
      Swap(arr, n - i + 2 * j, n - i + 2 * j + 1);
    }
  }
}

int main(void) {
  int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
  TransformArray(arr, sizeof(arr) / sizeof(int));
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}