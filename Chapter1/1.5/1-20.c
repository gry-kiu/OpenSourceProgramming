#include <stdio.h>

int BinarySearchRecursive(int arr[], int low, int high, int value) {
  if (low > high) {
    return -1;
  }
  int mid = (low + high) / 2;
  if (arr[mid] == value) {
    return mid;
  } else if (arr[mid] < value) {
    return BinarySearchRecursive(arr, mid + 1, high, value);
  } else {
    return BinarySearchRecursive(arr, low, mid - 1, value);
  }
}

int main(void) {
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19};
  printf("%d\n", BinarySearchRecursive(arr, 0, sizeof(arr) / sizeof(int), 11));
  return 0;
}
