#include <stdio.h>

int NumberOfTriangles(int arr[], int size) {
  int count = 0;
  for (int i = 0; i < size - 2; i++) {
    for (int j = i + 1; j < size - 1; j++) {
      for (int k = j + 1; k < size; k++) {
        if (arr[i] + arr[j] > arr[k]) {
          printf("%d, %d, %d\n", arr[i], arr[j], arr[k]);
          count += 1;
        }
      }
    }
  }
  return count;
}

int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6};
  printf("%d\n", NumberOfTriangles(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
