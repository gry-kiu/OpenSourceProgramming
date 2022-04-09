#include <stdio.h>

int LinearSearchUnsorted(int arr[], int size, int value) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
      return 1;
    }
  }
  return 0;
}

int main(void) {
  int arr[] = {2, 3, 7, 5, 11, 13, 19, 17};
  printf("%d\n", LinearSearchUnsorted(arr, sizeof(arr) / sizeof(int), 11));
  return 0;
}
