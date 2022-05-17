#include "auxi.h"
#include <stdio.h>

int GetMajority(int arr[], int size) {
  QuickSort(arr, size);
  int candidate = arr[size / 2], count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == candidate) {
      count++;
    }
  }
  return count > size / 2 ? candidate : 0;
}

int main(void) {
  int arr[] = {2, 3, 5, 5, 2, 3, 5, 5, 3, 5};
  printf("%d\n", GetMajority(arr, sizeof(arr) / sizeof(int)));
  return 0;
}