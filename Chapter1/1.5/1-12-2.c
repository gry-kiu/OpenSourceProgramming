#include <stdio.h>
#include <stdlib.h>

int Max(int a, int b) {
  return a > b ? a : b;
}

int ArrayIndexMaxDiff(int arr[], int size) {
  int *leftMin = (int *)malloc(size * sizeof(int));
  int *rightMax = (int *)malloc(size * sizeof(int));

  leftMin[0] = arr[0];
  for (int i = 1; i < size; i++) {
    if (leftMin[i - 1] < arr[i]) {
      leftMin[i] = leftMin[i - 1];
    } else {
      leftMin[i] = arr[i];
    }
  }

  rightMax[size - 1] = arr[size - 1];
  for (int i = size - 2; i > -1; i--) {
    if (rightMax[i + 1] > arr[i]) {
      rightMax[i] = rightMax[i + 1];
    } else {
      rightMax[i] = arr[i];
    }
  }

  int i = 0, j = 0;
  int maxDiff = -1;
  while (i < size && j < size) {
    if (leftMin[i] < rightMax[j]) {
      maxDiff = Max(maxDiff, j - i);
      j += 1;
    } else {
      i += 1;
    }
  }
  free(leftMin);
  free(rightMax);
  return maxDiff;
}

int main(void) {
  int arr[] = {2, 3, 11, 13, 5, 7, 17, 19};
  printf("%d\n", ArrayIndexMaxDiff(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
