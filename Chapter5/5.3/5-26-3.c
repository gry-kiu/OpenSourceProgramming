#include <stdio.h>

int GetMajority(int arr[], int size) {
  int candidate = arr[0], count = 1;
  for (int i = 1; i < size; i++) {
    if (arr[i] == candidate) {
      count++;
    } else {
      count--;
    }
    if (count == 0) {
      candidate = arr[i];
      count = 1;
    }
  }

  count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == candidate) {
      count++;
    }
  }
  return count > size / 2 ? candidate : 0;
}

int main(void) {
  int arr[] = {2, 3, 5, 5, 2, 3, 5, 5, 3, 5};
  printf("%d\n", GetMajority(arr, sizeof(arr) / sizeof(int)));
  return 0;
}