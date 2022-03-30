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

void SeperateEvenAndOdd(int arr[], int size) {
  int left = 0, right = size - 1;
  while (left < right) {
    if (arr[left] % 2 == 0) {
      left += 1;
    } else if (arr[right] % 2 == 1) {
      right -= 1;
    } else {
      Swap(arr, left, right);
      left += 1;
      right -= 1;
    }
  }
}

int main(void) {
  int arr[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
  SeperateEvenAndOdd(arr, sizeof(arr) / sizeof(int));
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
