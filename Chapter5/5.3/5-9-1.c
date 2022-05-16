#include <math.h>
#include <stdio.h>

void MinAbsSumPair(int arr[], int size) {
  int minFirst = 0, minSecond = 1;
  int minSum = fabs(arr[minFirst] + arr[minSecond]);
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      int sum = fabs(arr[i] + arr[j]);
      if (sum < minSum) {
        minSum = sum;
        minFirst = i;
        minSecond = j;
      }
    }
  }
  printf("%d, %d\n", arr[minFirst], arr[minSecond]);
}

int main(void) {
  int arr[] = {2, 3, -5, -7, 11, 13, -17, -19};
  MinAbsSumPair(arr, sizeof(arr) / sizeof(int));
  return 0;
}
