#include <stdio.h>

int SmallestPositiveMissingNumber(int arr[], int size) {
  for (int i = 1; i < size + 1; i++) {
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
  int arr[] = {8, -1, 6, 1, 9, 3, 2, 7, 4, -1};
  printf("%d\n", SmallestPositiveMissingNumber(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
