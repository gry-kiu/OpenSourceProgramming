#include <stdio.h>

int OddCount(int arr[], int size) {
  int xorSum = 0;
  for (int i = 0; i < size; i++) {
    xorSum ^= arr[i];
  }
  return xorSum;
}

int main(void) {
  int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5};
  printf("%d\n", OddCount(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
