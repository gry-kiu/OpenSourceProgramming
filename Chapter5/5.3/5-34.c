#include <stdio.h>

int FindMedian(int arr1[], int size1, int arr2[], int size2) {
  int medianIndex = ((size1 + size2) + (size1 + size2) % 2) / 2;
  int i = 0, j = 0;
  int count = 0;
  while (count < medianIndex - 1) {
    if ((i < size1 - 1) && (arr1[i] < arr2[j])) {
      i++;
    } else {
      j++;
    }
    count++;
  }
  return arr1[i] < arr2[j] ? arr1[i] : arr2[j];
}

int main(void) {
  int arr1[] = {2, 3, 5, 7, 11, 13};
  int arr2[] = {4, 6, 8, 9, 10, 12};
  printf("%d\n", FindMedian(arr1, sizeof(arr1) / sizeof(int), arr2, sizeof(arr2) / sizeof(int)));
  return 0;
}