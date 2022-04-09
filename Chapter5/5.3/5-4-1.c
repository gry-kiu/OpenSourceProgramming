#include <stdio.h>

int FindMissingNumber(int arr[], int size) {
  for (int i = 1; i <= size; i++) {
    int found = 0;
    for (int j = 0; j < size; j++) {
      if (arr[j] == i) {
        found = 1;
        break;
      }
    }
    if (found == 0) {
      return i;
    }
  }
  return -1;
}

int main(void) {
  int arr[] = {2, 4, 8, 10, 1, 3, 5, 7, 9};
  printf("%d\n", FindMissingNumber(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
