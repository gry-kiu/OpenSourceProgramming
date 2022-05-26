#include <stdio.h>

int RotationMaxIndexUtil(int arr[], int start, int end) {
  if (start >= end) {
    return start;
  }
  int mid = (start + end) / 2;
  if (arr[mid] > arr[mid + 1]) {
    return mid;
  }
  if (arr[start] <= arr[mid]) {
    return RotationMaxIndexUtil(arr, mid + 1, end);
  } else {
    return RotationMaxIndexUtil(arr, start, mid - 1);
  }
}

int RotationMaxIndex(int arr[], int size) {
  return RotationMaxIndexUtil(arr, 0, size - 1);
}

int main(void) {
  int arr[] = {17, 19, 2, 3, 5, 7, 11, 13};
  printf("%d\n", RotationMaxIndex(arr, sizeof(arr) / sizeof(int)));
  return 0;
}