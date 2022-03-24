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

void WaveArray(int arr[], int size) {
  for (int i = 1; i < size; i += 2) {
    if ((i - 1) >= 0 && arr[i] > arr[i - 1]) {
      Swap(arr, i, i - 1);
    }
    if ((i + 1) < size && arr[i] > arr[i + 1]) {
      Swap(arr, i, i + 1);
    }
  }
}

int main(void) {
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19};
  WaveArray(arr, sizeof(arr) / sizeof(int));
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
