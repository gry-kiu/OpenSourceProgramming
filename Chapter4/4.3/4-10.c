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

int CheckReverse(int arr[], int size) {
  int start = -1;
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      start = i;
      break;
    }
  }
  if (start == -1) {
    return 1;
  }
  int stop = -1;
  for (int i = start; i < size - 1; i++) {
    if (arr[i] < arr[i + 1]) {
      stop = i;
      break;
    }
  }
  if (stop == -1) {
    return 1;
  }
  if (arr[start - 1] > arr[stop] || arr[stop + 1] < arr[start]) {
    return 0;
  }
  for (int i = stop + 1; i < size - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      return 0;
    }
  }
  return 1;
}

int main(void) {
  int arr[] = {2, 3, 13, 11, 7, 5, 17, 19};
  printf("%d\n", CheckReverse(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
