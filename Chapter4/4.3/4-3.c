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

int RangePartition(int arr[], int size, int lower, int upper) {
  int left = 0, right = size - 1;
  int i = 0;
  while (i <= right) {
    if (arr[i] < lower) {
      Swap(arr, i, left);
      left += 1;
      i += 1;
    } else if (arr[i] > upper) {
      Swap(arr, i, right);
      right -= 1;
    } else {
      i += 1;
    }
  }
}

int main(void) {
  int arr[] = {1, 21, 2, 20, 3, 19, 4, 18, 5, 17, 6, 16, 7, 15, 8, 14, 9, 13, 10, 12, 11};
  RangePartition(arr, sizeof(arr) / sizeof(int), 9, 12);
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
