#include <stdio.h>

int MaxSubArraySum(int arr[], int size) {
  int maxSoFar = 0, maxEndingHere = 0;
  for (int i = 0; i < size; i++) {
    maxEndingHere += arr[i];
    if (maxEndingHere < 0) {
      maxEndingHere = 0;
    }
    if (maxSoFar < maxEndingHere) {
      maxSoFar = maxEndingHere;
    }
  }
  return maxSoFar;
}

int main(void) {
  int arr[] = {2, 3, -5, -7, 11, 13, -17, -19};
  printf("%d\n", MaxSubArraySum(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
