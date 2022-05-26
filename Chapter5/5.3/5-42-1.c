#include "auxi.h"
#include <stdio.h>

int CheckPermutation(int arr1[], int size1, int arr2[], int size2) {
  if (size1 != size2) {
    return 0;
  }
  QuickSort(arr1, size1);
  QuickSort(arr2, size2);
  for (int i = 0; i < size1; i++) {
    if (arr1[i] != arr2[i]) {
      return 0;
    }
  }
  return 1;
}

int main(void) {
  int arr1[] = {2, 3, 5, 7, 11, 13, 17, 19};
  int arr2[] = {17, 19, 2, 3, 5, 7, 11, 13};
  printf("%d\n", CheckPermutation(arr1, sizeof(arr1) / sizeof(int), arr2, sizeof(arr2) / sizeof(int)));
  return 0;
}