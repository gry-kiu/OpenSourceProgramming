#include <stdio.h>

void OddCount(int arr[], int size) {
  int xorSum = 0;
  for (int i = 0; i < size; i++) {
    xorSum ^= arr[i];
  }
  int setBit = xorSum & ~(xorSum - 1);
  int first = 0, second = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] & setBit) {
      first ^= arr[i];
    } else {
      second ^= arr[i];
    }
  }
  printf("%d, %d\n", first, second);
}

int main(void) {
  int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
  OddCount(arr, sizeof(arr) / sizeof(int));
  return 0;
}
