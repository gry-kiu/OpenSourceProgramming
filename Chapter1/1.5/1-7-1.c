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
    int curr = i, value = -1;

    while (arr[curr] != -1 && arr[curr] != curr) {
      int temp = arr[curr];
      arr[curr] = value;
      curr = value = temp;
    }

    if (value != -1) {
      arr[curr] = value;
    }
  }
}

int main(void) {
  int arr[] = {8, -1, 6, 1, 9, 3, 2, 7, 4, -1};
  IndexArray(arr, sizeof(arr) / sizeof(int));
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
