#include <stdio.h>

int SumArray(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main(void) {
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19};
  printf("%d\n", SumArray(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
