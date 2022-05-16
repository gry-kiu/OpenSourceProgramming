#include <stdio.h>

int GetMax(int arr[], int size) {
  int max = arr[0], maxCount = 1;
  for (int i = 0; i < size - 1; i++) {
    int count = 1;
    for (int j = i + 1; j < size; j++) {
      if (arr[i] == arr[j]) {
        count++;
      }
    }
    if (count > maxCount) {
      max = arr[i];
      maxCount = count;
    }
  }
  return max;
}

int main(void) {
  int arr[] = {2, 3, 5, 5, 2, 3, 5, 5, 3, 5};
  printf("%d\n", GetMax(arr, sizeof(arr) / sizeof(int)));
  return 0;
}