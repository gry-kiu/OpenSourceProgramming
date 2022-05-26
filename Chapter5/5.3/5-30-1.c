#include <stdio.h>

int SearchBitonicArrayMax(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      return arr[i];
    }
  }
  return 0;
}

int main(void) {
  int arr[] = {2, 3, 5, 7, 11, 13, 12, 10, 9, 8, 6, 4};
  printf("%d\n", SearchBitonicArrayMax(arr, sizeof(arr) / sizeof(int)));
  return 0;
}