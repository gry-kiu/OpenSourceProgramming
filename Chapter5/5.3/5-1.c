#include <stdio.h>

int FirstRepeated(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] == arr[j]) {
        return arr[i];
      }
    }
  }
  return 0;
}

int main(void) {
  int arr[] = {1, 3, 5, 7, 9, 9, 7, 5, 3, 1};
  printf("%d\n", FirstRepeated(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
