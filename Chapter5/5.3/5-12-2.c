#include "auxi.h"
#include <math.h>
#include <stdio.h>

int FindPair(int arr[], int size, int value) {
  QuickSort(arr, size);
  int first = 0, second = 0;
  while (first < size && second < size) {
    int diff = fabs(arr[first] - arr[second]);
    if (diff == value) {
      printf("%d, %d\n", arr[first], arr[second]);
      return 1;
    } else if (diff > value) {
      first++;
    } else {
      second++;
    }
  }
  return 0;
}

int main(void) {
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19};
  printf("%d\n", FindPair(arr, sizeof(arr) / sizeof(int), 2));
  return 0;
}
