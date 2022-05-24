#include <stdio.h>

int FindFirstIndex(int arr[], int size, int start, int end, int value) {
  if (start > end) {
    return -1;
  }
  int mid = start + (end - start) / 2;
  if ((arr[mid] == value) && (mid == start || arr[mid - 1] != value)) {
    return mid;
  }
  if (arr[mid] >= value) {
    FindFirstIndex(arr, size, start, mid - 1, value);
  } else {
    FindFirstIndex(arr, size, mid + 1, end, value);
  }
}

int FindLastIndex(int arr[], int size, int start, int end, int value) {
  if (start > end) {
    return -1;
  }
  int mid = start + (end - start) / 2;
  if ((arr[mid] == value) && (mid == end || arr[mid + 1] != value)) {
    return mid;
  }
  if (arr[mid] > value) {
    FindLastIndex(arr, size, start, mid - 1, value);
  } else {
    FindLastIndex(arr, size, mid + 1, end, value);
  }
}

int FindValueCount(int arr[], int size, int value) {
  int firstIndex = FindFirstIndex(arr, size, 0, size - 1, value);
  int lastIndex = FindLastIndex(arr, size, 0, size - 1, value);
  return lastIndex - firstIndex + 1;
}

int main(void) {
  int arr[] = {2, 2, 3, 3, 3, 5, 5, 5, 5, 5, 5};
  printf("%d\n", FindValueCount(arr, sizeof(arr) / sizeof(int), 5));
  return 0;
}