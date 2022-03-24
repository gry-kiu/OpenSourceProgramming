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

void IndexArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    while (arr[i] != -1 && arr[i] != i) {
      int temp = arr[i];
      arr[i] = arr[temp];
      arr[temp] = temp;
    }
  }
}

int main(void) {
  int arr[] = {8, -1, 6, 1, 9, 3, 2, 7, 4, -1};
  IndexArray(arr, sizeof(arr) / sizeof(int));
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
