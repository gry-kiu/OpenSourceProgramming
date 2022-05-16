#include "auxi.h"
#include <stdio.h>

int SmallerThanTriplets(int arr[], int size, int value) {
  QuickSort(arr, size);
  for (int i = 0; i < size - 2; i++) {
    int start = i + 1;
    int stop = size - 1;
    while (start < stop) {
      if (arr[i] + arr[start] + arr[stop] == value) {
        start += 1;
        stop -= 1;
      } else if (arr[i] + arr[start] + arr[stop] > value) {
        stop -= 1;
      } else {
        printf("%d, %d, %d\n", arr[i], arr[start], arr[stop]);
        start += 1;
      }
    }
  }
}

int main(void) {
  int arr[] = {2, 3, -5, -7, 11, 13, -17, -19};
  SmallerThanTriplets(arr, sizeof(arr) / sizeof(int), 0);
  return 0;
}
