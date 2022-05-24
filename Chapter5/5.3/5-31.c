#include "auxi.h"
#include <stdio.h>

int SearchBitonicArrayMaxIndex(int arr[], int size) {
  int low = 0, high = size - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if ((arr[mid - 1] < arr[mid]) && (arr[mid] > arr[mid + 1])) {
      return mid;
    } else if ((arr[mid - 1] < arr[mid]) && (arr[mid] < arr[mid + 1])) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

int SearchBitonicArray(int arr[], int size, int value) {
  int maxIndex = SearchBitonicArrayMaxIndex(arr, size);
  return BinarySearch(arr, maxIndex, value) || BinarySearch_Desc(arr + maxIndex, size - maxIndex, value) ? 1 : 0;
}

int main(void) {
  int arr[] = {2, 3, 5, 7, 11, 13, 12, 10, 9, 8, 6, 4};
  printf("%d\n", SearchBitonicArray(arr, sizeof(arr) / sizeof(int), 13));
  return 0;
}