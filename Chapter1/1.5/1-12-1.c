#include <stdio.h>

int Max(int a, int b) {
  return a > b ? a : b;
}

int ArrayIndexMaxDiff(int arr[], int size) {
  int maxDiff = -1;
  for (int i = 0; i < size; i++) {
    int j = size - 1;
    while (j > i) {
      if (arr[j] > arr[i]) {
        maxDiff = Max(maxDiff, j - i);
        break;
      }
      j -= 1;
    }
  }
  return maxDiff;
}

int main(void) {
  int arr[] = {2, 3, 11, 13, 5, 7, 17, 19};
  printf("%d\n", ArrayIndexMaxDiff(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
