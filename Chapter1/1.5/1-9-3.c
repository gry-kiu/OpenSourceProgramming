#include <stdio.h>

int SmallestPositiveMissingNumber(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    while (arr[i] != i + 1 && arr[i] > 0 && arr[i] <= size) {
      int temp = arr[i];
      arr[i] = arr[temp - 1];
      arr[temp - 1] = temp;
    }
  }
  for (int i = 0; i < size; i++) {
    if (arr[i] != i + 1) {
      return i + 1;
    }
  }
  return -1;
}

int main(void) {
  int arr[] = {8, -1, 6, 1, 9, 3, 2, 7, 4, -1};
  printf("%d\n", SmallestPositiveMissingNumber(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
