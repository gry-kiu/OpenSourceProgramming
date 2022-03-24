#include <stdio.h>

int SequentialSearch(int arr[], int size, int value) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
      return i;
    }
  }
  return -1;
}

int main(void) {
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19};
  printf("%d\n", SequentialSearch(arr, sizeof(arr) / sizeof(int), 11));
  return 0;
}
