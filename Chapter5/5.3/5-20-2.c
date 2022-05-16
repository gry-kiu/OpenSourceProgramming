#include "auxi.h"
#include <stdio.h>

int ABCTriplets(int arr[], int size) {
  QuickSort(arr, size);
  for (int i = size - 1; i > 1; i--) {
    int start = 0;
    int stop = i - 1;
    while (start < stop) {
      if (arr[i] == arr[start] + arr[stop]) {
        printf("%d, %d, %d\n", arr[i], arr[start], arr[stop]);
        start += 1;
        stop -= 1;
      } else if (arr[i] < arr[start] + arr[stop]) {
        stop -= 1;
      } else {
        start += 1;
      }
    }
  }
}

int main(void) {
  int arr[] = {2, 3, -5, -7, 11, 13, -17, -19};
  ABCTriplets(arr, sizeof(arr) / sizeof(int));
  return 0;
}
