#include <stdio.h>

int RotationValueIndexUtil(int arr[], int start, int end, int value) {
  if (start > end) {
    return -1;
  }
  int mid = (start + end) / 2;
  if (arr[mid] == value) {
    return mid;
  }
  if (arr[mid] > arr[start]) {
    if (arr[start] <= value && value < arr[mid]) {
      RotationValueIndexUtil(arr, start, mid - 1, value);
    } else {
      RotationValueIndexUtil(arr, mid + 1, end, value);
    }
  } else {
    if (arr[mid] < value && value <= arr[end]) {
      RotationValueIndexUtil(arr, mid + 1, end, value);
    } else {
      RotationValueIndexUtil(arr, start, mid - 1, value);
    }
  }
}

int RotationValueIndex(int arr[], int size, int value) {
  return RotationValueIndexUtil(arr, 0, size - 1, value);
}

int main(void) {
  int arr[] = {17, 19, 2, 3, 5, 7, 11, 13};
  printf("%d\n", RotationValueIndex(arr, sizeof(arr) / sizeof(int), 13));
  return 0;
}