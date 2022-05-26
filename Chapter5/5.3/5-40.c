#include <math.h>
#include <stdio.h>

int MinAbsDiffAdjCircular(int arr[], int size) {
  if (size < 2) {
    return -1;
  }
  int minAbsDiff = fabs(arr[0] - arr[1]);
  for (int i = 1; i < size; i++) {
    minAbsDiff = fmin(minAbsDiff, fabs(arr[i] - arr[(i + 1) % size]));
  }
  return minAbsDiff;
}

int main(void) {
  int arr[] = {2, 3, -5, -7, 11, 13, -17, -19};
  printf("%d\n", MinAbsDiffAdjCircular(arr, sizeof(arr) / sizeof(int)));
  return 0;
}