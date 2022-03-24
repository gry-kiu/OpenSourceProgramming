#include <stdio.h>

int FindMaxSum(int arr[], int size) {
  int incl = arr[0];
  int excl = 0, excl_prev = 0;
  for (int i = 1; i < size; i++) {
    excl = (incl > excl_prev) ? incl : excl_prev;
    incl = excl_prev + arr[i];
    excl_prev = excl;
  }
  return (incl > excl) ? incl : excl;
}

int main(void) {
  int arr[] = {2, 3, 13, 11, 5, 7};
  printf("%d\n", FindMaxSum(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
