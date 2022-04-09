#include <stdio.h>

int BinarySearch(int arr[], int size, int value) {
  int low = 0, high = size - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == value) {
      return 1;
    } else if (arr[mid] < value) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return 0;
}

int main(void) {
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19};
  printf("%d\n", BinarySearch(arr, sizeof(arr) / sizeof(int), 11));
  return 0;
}
