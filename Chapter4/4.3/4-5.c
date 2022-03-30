#include <math.h>
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

int AbsMore(int value1, int value2, int ref) {
  return More(abs(value1 - ref), abs(value2 - ref));
}

void AbsBubbleSort(int arr[], int size, int ref) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (AbsMore(arr[j], arr[j + 1], ref)) {
        Swap(arr, j, j + 1);
      }
    }
  }
}

int main(void) {
  int arr[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
  int ref = 5;
  AbsBubbleSort(arr, sizeof(arr) / sizeof(int), ref);
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
