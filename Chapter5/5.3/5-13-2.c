#include "auxi.h"
#include <stdio.h>

void MinDiffPair(int arr[], int size) {
  QuickSort(arr, size);
  int minFirst = 0, minSecond = 1;
  int minDiff = arr[minSecond] - arr[minFirst];
  for (int i = 1; i < size - 1; i++) {
    int diff = arr[i + 1] - arr[i];
    if (diff < minDiff) {
      minDiff = diff;
      minFirst = i;
      minSecond = i + 1;
    }
  }
  printf("%d, %d\n", arr[minFirst], arr[minSecond]);
}

int main(void) {
  int arr[] = {2, 3, -5, -7, 11, 13, -17, -19};
  MinDiffPair(arr, sizeof(arr) / sizeof(int));
  return 0;
}
