#include <stdio.h>
#include <stdlib.h>

int GetMax(int arr[], int size, int range) {
  int max = arr[0], maxCount = 1;
  int *count = (int *)calloc(range, sizeof(int));
  for (int i = 0; i < size; i++) {
    count[arr[i] - 1]++;
    if (count[arr[i] - 1] > maxCount) {
      max = arr[i];
      maxCount = count[arr[i] - 1];
    }
  }
  free(count);
  return max;
}

int main(void) {
  int arr[] = {2, 3, 5, 5, 2, 3, 5, 5, 3, 5};
  printf("%d\n", GetMax(arr, sizeof(arr) / sizeof(int), 5));
  return 0;
}