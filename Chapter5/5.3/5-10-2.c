#include "auxi.h"
#include <stdio.h>

int FindPair(int arr[], int size, int value) {
  QuickSort(arr, size);
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
  int arr[] = {2, 3, -5, -7, 11, 13, -17, -19};
  printf("%d\n", FindPair(arr, sizeof(arr) / sizeof(int), 4));
  return 0;
}
