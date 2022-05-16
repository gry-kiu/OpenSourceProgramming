#include "auxi.h"
#include <math.h>
#include <stdio.h>

void MinDiffPair(int arr1[], int size1, int arr2[], int size2) {
  QuickSort(arr1, size1);
  QuickSort(arr2, size2);
  int first = 0, second = 0;
  int minFirst = first, minSecond = second;
  int minDiff = fabs(arr1[minFirst] - arr2[minSecond]);
  while (first < size1 && second < size2) {
    int diff = fabs(arr1[first] - arr2[second]);
    if (diff < minDiff) {
      minDiff = diff;
      minFirst = first;
      minSecond = second;
    }
    if (arr1[first] < arr2[second]) {
      first++;
    } else {
      second++;
    }
  }
  printf("%d, %d\n", arr1[minFirst], arr2[minSecond]);
}

int main(void) {
  int arr1[] = {2, 3, -5, -7, 11, 13, -17, -19};
  int arr2[] = {1, 4, -6, -8, 9, 10, -12, -14};
  MinDiffPair(arr1, sizeof(arr1) / sizeof(int), arr2, sizeof(arr2) / sizeof(int));
  return 0;
}
