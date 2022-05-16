#include <stdio.h>

int FindPair(int arr[], int size, int value) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] + arr[j] == value) {
        printf("%d, %d\n", arr[i], arr[j]);
        return 1;
      }
    }
  }
  return 0;
}

int main(void) {
  int arr[] = {2, 3, -5, -7, 11, 13, -17, -19};
  printf("%d\n", FindPair(arr, sizeof(arr) / sizeof(int), 4));
  return 0;
}
