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

void ReverseArray(int arr[], int start, int stop) {
  while (start < stop) {
    Swap(arr, start, stop);
    start += 1;
    stop -= 1;
  }
}

void MaxMinArr(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    ReverseArray(arr, i, size - 1);
  }
}

int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  MaxMinArr(arr, sizeof(arr) / sizeof(int));
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
