#include <stdio.h>

int FindValueCount(int arr[], int size, int value) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
      count++;
    }
  }
  return count;
}

int main(void) {
  int arr[] = {2, 2, 3, 3, 3, 5, 5, 5, 5, 5, 5};
  printf("%d\n", FindValueCount(arr, sizeof(arr) / sizeof(int), 5));
  return 0;
}