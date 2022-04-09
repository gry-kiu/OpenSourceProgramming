#include "auxi.h"
#include <stdio.h>

int SumDistinct(int arr[], int size) {
  QuickSort(arr, size);
  int sum = 0;
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] != arr[i + 1]) {
      sum += arr[i];
    }
  }
  sum += arr[size - 1];
  return sum;
}

int main(void) {
  int arr[] = {1, 3, 5, 7, 9, 9, 7, 5, 3, 1};
  printf("%d\n", SumDistinct(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
