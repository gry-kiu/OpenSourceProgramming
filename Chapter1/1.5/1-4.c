#include <stdio.h>

void PrintArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void Swap(int arr[], int i1, int i2) {
  arr[i1] ^= arr[i2] ^= arr[i1] ^= arr[i2];
}

void ReverseArray(int arr[], int size) {
  for (int i = 0, j = size - 1; i < j; i++, j--) {
    Swap(arr, i, j);
  }
}

void RotateArray(int arr[], int size, int k) {
  ReverseArray(arr, k);
  ReverseArray(&arr[k], size - k);
  ReverseArray(arr, size);
}

int main(void) {
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19};
  RotateArray(arr, sizeof(arr) / sizeof(int), 2);
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
