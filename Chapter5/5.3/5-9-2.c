#include "auxi.h"
#include <math.h>
#include <stdio.h>

void MinAbsSumPair(int arr[], int size) {
  QuickSort(arr, size);
  int first = 0, second = size - 1;
  int minFirst = first, minSecond = second;
  int minSum = fabs(arr[minFirst] + arr[minSecond]);
  while (first < second) {
    int sum = arr[first] + arr[second];
    if (fabs(sum) < minSum) {
      minSum = fabs(sum);
      minFirst = first;
      minSecond = second;
    }
    if (sum < 0) {
      first++;
    } else if (sum > 0) {
      second--;
    } else {
      break;
    }
  }
  printf("%d, %d\n", arr[minFirst], arr[minSecond]);
}

int main(void) {
  int arr[] = {2, 3, -5, -7, 11, 13, -17, -19};
  MinAbsSumPair(arr, sizeof(arr) / sizeof(int));
  return 0;
}
