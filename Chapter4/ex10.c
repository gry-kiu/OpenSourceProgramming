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

int Search(int arr[], int size, int target) {
  if (size == 0) {
    return -1;
  }
  int start = 0, stop = size - 1;

  while (start < stop) {
    int mid = (start + stop) / 2;
    if (arr[mid] == target) {
      return mid;
    }
    if (arr[start] <= arr[mid]) {
      if (target < arr[mid] && target >= arr[start]) {
        stop = mid - 1;
      } else {
        start = mid + 1;
      }
    } else {
      if (target > arr[mid] && target <= arr[stop]) {
        start = mid + 1;
      } else {
        stop = mid - 1;
      }
    }
  }
  return arr[start] == target ? start : -1;
}

int main(void) {
  int arr[] = {4, 5, 6, 7, 1, 2, 3};
  printf("%d\n", Search(arr, sizeof(arr) / sizeof(int), 5));
  return 0;
}
