#include <stdio.h>

void PrintArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void Swap(int arr[], int i1, int i2) {
  arr[i1] ^= arr[i2] ^= arr[i1] ^= arr[i2];
}

int MaxCircularSum(int arr[], int size) {
  int sumAll = 0, currVal = 0;
  for (int i = 0; i < size; i++) {
    sumAll += arr[i];
    currVal += (i + 1) * arr[i];
  }

  int maxVal = currVal;
  for (int i = 1; i < size; i++) {
    currVal = (currVal + sumAll) - (size * arr[size - i]);
    if (currVal > maxVal) {
      maxVal = currVal;
    }
  }
  return maxVal;
}

int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  MaxCircularSum(arr, sizeof(arr) / sizeof(int));
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
