#include <stdio.h>
#include <stdlib.h>

int Less(int value1, int value2) {
  return value1 < value2;
}

int More(int value1, int value2) {
  return value1 > value2;
}

void PrintArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void Swap(int arr[], int i1, int i2) {
  if (i1 == i2) {
    return;
  }
  arr[i1] ^= arr[i2] ^= arr[i1] ^= arr[i2];
}

int Partition(int arr[], int size) {
  int left = 0, right = size - 1;
  int i = 0;
  while (i <= right) {
    if (arr[i] == 0) {
      Swap(arr, i, left);
      left += 1;
      i += 1;
    } else if (arr[i] == 2) {
      Swap(arr, i, right);
      right -= 1;
    } else {
      i += 1;
    }
  }
}

int main(void) {
  int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
  Partition(arr, sizeof(arr) / sizeof(int));
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
