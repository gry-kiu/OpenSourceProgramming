#include "auxi.h"
#include <stdio.h>

int ZeroSumTriplets(int arr[], int size) {
  QuickSort(arr, size);
  for (int i = 0; i < size - 2; i++) {
    int start = i + 1;
    int stop = size - 1;
    while (start < stop) {
      if (arr[i] + arr[start] + arr[stop] == 0) {
        printf("%d, %d, %d\n", arr[i], arr[start], arr[stop]);
        start += 1;
        stop -= 1;
      } else if (arr[i] + arr[start] + arr[stop] > 0) {
        stop -= 1;
      } else {
        start += 1;
      }
    }
  }
}

int main(void) {
  int arr[] = {2, 3, -5, -7, 11, 13, -17, -19};
  ZeroSumTriplets(arr, sizeof(arr) / sizeof(int));
  return 0;
}
