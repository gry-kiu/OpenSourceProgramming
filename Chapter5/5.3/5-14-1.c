#include <math.h>
#include <stdio.h>

void MinDiffPair(int arr1[], int size1, int arr2[], int size2) {
  int minFirst = 0, minSecond = 0;
  int minDiff = fabs(arr1[minFirst] - arr2[minSecond]);
  for (int i = 0; i < size1; i++) {
    for (int j = 0; j < size2; j++) {
      int diff = fabs(arr1[i] - arr2[j]);
      if (diff < minDiff) {
        minDiff = diff;
        minFirst = i;
        minSecond = j;
      }
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
