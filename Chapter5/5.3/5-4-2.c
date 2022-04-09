#include <stdio.h>

int FindMissingNumber(int arr[], int size, int range) {
  int xorSum = 0;
  for (int i = 1; i <= range; i++) {
    xorSum ^= i;
  }
  for (int i = 0; i < size; i++) {
    xorSum ^= arr[i];
  }
  return xorSum;
}

int main(void) {
  int arr[] = {2, 4, 8, 10, 1, 3, 5, 7, 9};
  printf("%d\n", FindMissingNumber(arr, sizeof(arr) / sizeof(int), 10));
  return 0;
}
