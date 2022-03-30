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

void SelectionSort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int max = 0;
    for (int j = 1; j <= size - 1 - i; j++) {
      if (More(arr[j], arr[max])) {
        max = j;
      }
    }
    Swap(arr, size - 1 - i, max);
  }
}

int main(void) {
  int arr[] = {4, 5, 3, 2, 6, 7, 1, 8, 9, 10};
  SelectionSort(arr, sizeof(arr) / sizeof(int));
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
