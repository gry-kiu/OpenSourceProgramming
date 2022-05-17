#include <stdio.h>

int FirstIndex(int arr[], int size, int value) {
  int low = 0, high = size - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if ((mid == 0 || arr[mid - 1] < value) && (arr[mid] == value)) {
      return mid;
    } else if (arr[mid] < value) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

int GetMajority(int arr[], int size) {
  int candidate = arr[size / 2];
  int firstIndex = FirstIndex(arr, size, candidate);
  if ((firstIndex + size / 2 <= size - 1) && (arr[firstIndex + size / 2] == candidate)) {
    return candidate;
  } else {
    return 0;
  }
}

int main(void) {
  int arr[] = {2, 2, 3, 3, 3, 5, 5, 5, 5, 5, 5};
  printf("%d\n", GetMajority(arr, sizeof(arr) / sizeof(int)));
  return 0;
}