#include "auxi.h"
#include <stdio.h>

int NumberOfTriangles(int arr[], int size) {
  QuickSort(arr, size);
  int count = 0;
  for (int i = size - 1; i > 1; i--) {
    int start = 0;
    int stop = i - 1;
    while (start < stop) {
      if (arr[i] == arr[start] + arr[stop]) {
        start += 1;
      } else if (arr[i] < arr[start] + arr[stop]) {
        count += stop - start;
        stop -= 1;
      } else {
        start += 1;
      }
    }
  }
  return count;
}

int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6};
  printf("%d\n", NumberOfTriangles(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
