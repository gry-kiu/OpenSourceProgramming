#include <stdio.h>

int ZeroSumTriplets(int arr[], int size) {
  for (int i = 0; i < size - 2; i++) {
    for (int j = i + 1; j < size - 1; j++) {
      for (int k = j + 1; k < size; k++) {
        if (arr[i] + arr[j] + arr[k] == 0) {
          printf("%d, %d, %d\n", arr[i], arr[j], arr[k]);
        }
      }
    }
  }
}

int main(void) {
  int arr[] = {2, 3, -5, -7, 11, 13, -17, -19};
  ZeroSumTriplets(arr, sizeof(arr) / sizeof(int));
  return 0;
}
