#include "auxi.h"
#include <stdio.h>

int FindPair(int arr1[], int size1, int arr2[], int size2, int value) {
  QuickSort(arr1, size1);
  QuickSort(arr2, size2);
  int first = 0, second = size2 - 1;
  while (first < size1 && second > 0) {
    int sum = arr1[first] + arr2[second];
    if (sum == value) {
      printf("%d, %d\n", arr1[first], arr2[second]);
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
  int arr1[] = {2, 3, -5, -7, 11, 13, -17, -19};
  int arr2[] = {1, 4, -6, -8, 9, 10, -12, -14};
  printf("%d\n", FindPair(arr1, sizeof(arr1) / sizeof(int), arr2, sizeof(arr2) / sizeof(int), 4));
  return 0;
}
