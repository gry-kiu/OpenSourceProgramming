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

int EqMore(int value1, int value2, int A) {
  return More(A * value1 * value1, A * value2 * value2);
}

void EqBubbleSort(int arr[], int size, int A) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (EqMore(arr[j], arr[j + 1], A)) {
        Swap(arr, j, j + 1);
      }
    }
  }
}

int main(void) {
  int arr[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
  int A = 5;
  EqBubbleSort(arr, sizeof(arr) / sizeof(int), A);
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
