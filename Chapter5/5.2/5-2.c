#include <stdio.h>

int LinearSearchSorted(int arr[], int size, int value) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
      return 1;
    } else if (arr[i] > value) {
      return 0;
    }
  }
  return 0;
}

int main(void) {
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19};
  printf("%d\n", LinearSearchSorted(arr, sizeof(arr) / sizeof(int), 11));
  return 0;
}
