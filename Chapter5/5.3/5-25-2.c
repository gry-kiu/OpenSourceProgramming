#include "auxi.h"
#include <stdio.h>

int GetMax(int arr[], int size) {
  QuickSort(arr, size);
  int max = arr[0], maxCount = 1;
  int curr = arr[0], currCount = 1;
  for (int i = 1; i < size; i++) {
    if (arr[i] == arr[i - 1]) {
      currCount++;
    } else {
      curr = arr[i];
      currCount = 1;
    }
    if (currCount > maxCount) {
      max = curr;
      maxCount = currCount;
    }
  }
  return max;
}

int main(void) {
  int arr[] = {2, 3, 5, 5, 2, 3, 5, 5, 3, 5};
  printf("%d\n", GetMax(arr, sizeof(arr) / sizeof(int)));
  return 0;
}