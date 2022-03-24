#include <stdio.h>

void PrintArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void Swap(int arr[], int i1, int i2) {
  int temp = arr[i1];
  arr[i1] = arr[i2];
  arr[i2] = temp;
}

void Permutation(int arr[], int size, int i) {
  if (size == i) {
    PrintArray(arr, size);
    return;
  }
  for (int j = i; j < size; j++) {
    Swap(arr, i, j);
    Permutation(arr, size, i + 1);
    Swap(arr, i, j);
  }
}

int main(void) {
  int arr[] = {0, 1, 2};
  Permutation(arr, sizeof(arr) / sizeof(int), 0);
}
