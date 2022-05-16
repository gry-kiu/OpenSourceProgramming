#include <math.h>
#include <stdio.h>

void MinDiffPair(int arr[], int size) {
  int minFirst = 0, minSecond = 1;
  int minDiff = fabs(arr[minFirst] - arr[minSecond]);
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      int diff = fabs(arr[i] - arr[j]);
      if (diff < minDiff) {
        minDiff = diff;
        minFirst = i;
        minSecond = j;
      }
    }
  }
  printf("%d, %d\n", arr[minFirst], arr[minSecond]);
}

int main(void) {
  int arr[] = {2, 3, -5, -7, 11, 13, -17, -19};
  MinDiffPair(arr, sizeof(arr) / sizeof(int));
  return 0;
}
