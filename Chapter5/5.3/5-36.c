#include <stdio.h>

int RotationMaxUtil(int arr[], int start, int end) {
  if (start >= end) {
    return arr[start];
  }
  int mid = (start + end) / 2;
  if (arr[mid] > arr[mid + 1]) {
    return arr[mid];
  }
  if (arr[start] <= arr[mid]) {
    return RotationMaxUtil(arr, mid + 1, end);
  } else {
    return RotationMaxUtil(arr, start, mid - 1);
  }
}

int RotationMax(int arr[], int size) {
  return RotationMaxUtil(arr, 0, size - 1);
}

int main(void) {
  int arr[] = {17, 19, 2, 3, 5, 7, 11, 13};
  printf("%d\n", RotationMax(arr, sizeof(arr) / sizeof(int)));
  return 0;
}