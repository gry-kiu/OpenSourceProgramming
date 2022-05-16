#include <stdio.h>

int FindTriplets(int arr[], int size, int value) {
  for (int i = 0; i < size - 2; i++) {
    for (int j = i + 1; j < size - 1; j++) {
      for (int k = j + 1; k < size; k++) {
        if (arr[i] + arr[j] + arr[k] == value) {
          printf("%d, %d, %d\n", arr[i], arr[j], arr[k]);
        }
      }
    }
  }
}

int main(void) {
  int arr[] = {2, 3, -5, -7, 11, 13, -17, -19};
  FindTriplets(arr, sizeof(arr) / sizeof(int), 0);
  return 0;
}
