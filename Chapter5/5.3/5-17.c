#include "auxi.h"
#include <stdio.h>

int SumPairRestArray(int arr[], int size) {
  QuickSort(arr, size);
  int total = 0;
  for (int i = 0; i < size; i++) {
    total += arr[i];
  }
  int value = total / 2;
  int first = 0, second = size - 1;
  while (first < second) {
    int sum = arr[first] + arr[second];
    if (sum == value) {
      printf("%d, %d\n", arr[first], arr[second]);
      return 1;
    } else if (sum < value) {
      first++;
    } else {
      second--;
    }
  }
  return 0;
}

int main(void) {
  int arr[] = {-1, -2, 1, 2, 3};
  printf("%d\n", SumPairRestArray(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
