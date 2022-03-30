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

void Merge(int arr1[], int size1, int arr2[], int size2) {
  int i = 0;
  while (i < size1) {
    if (arr1[i] <= arr2[0]) {
      i += 1;
    } else {
      arr1[i] ^= arr2[0] ^= arr1[i] ^= arr2[0];
      i += 1;
      for (int j = 0; j < size2 - 1; j++) {
        if (arr2[j] < arr2[j + 1]) {
          break;
        }
        Swap(arr2, j, j + 1);
      }
    }
  }
}

int main(void) {
  int arr1[] = {1, 5, 9, 10, 15, 20};
  int arr2[] = {2, 3, 8, 13};
  Merge(arr1, sizeof(arr1) / sizeof(int), arr2, sizeof(arr2) / sizeof(int));
  PrintArray(arr1, sizeof(arr1) / sizeof(int));
  PrintArray(arr2, sizeof(arr2) / sizeof(int));
  return 0;
}
