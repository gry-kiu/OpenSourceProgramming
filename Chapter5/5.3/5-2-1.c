#include <stdio.h>

void PrintRepeating(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] == arr[j]) {
        printf("%d ", arr[i]);
      }
    }
  }
  printf("\n");
}

int main(void) {
  int arr[] = {1, 3, 5, 7, 9, 9, 7, 5, 3, 1};
  PrintRepeating(arr, sizeof(arr) / sizeof(int));
  return 0;
}
