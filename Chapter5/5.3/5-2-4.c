#include <stdio.h>
#include <stdlib.h>

void PrintRepeating(int arr[], int size) {
  int *count = (int *)calloc(size, sizeof(int));
  for (int i = 0; i < size; i++) {
    if (count[arr[i]] == 1) {
      printf("%d ", arr[i]);
    } else {
      count[arr[i]]++;
    }
  }
  printf("\n");
  free(count);
}

int main(void) {
  int arr[] = {1, 3, 5, 7, 9, 9, 7, 5, 3, 1};
  PrintRepeating(arr, sizeof(arr) / sizeof(int));
  return 0;
}
