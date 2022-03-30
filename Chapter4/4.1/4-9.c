#include <stdio.h>
#include <stdlib.h>

int Less(int value1, int value2) {
  return value1 < value2;
}

int More(int value1, int value2) {
  return value1 > value2;
}

void PrintArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void Swap(int arr[], int i1, int i2) {
  if (i1 == i2) {
    return;
  }
  arr[i1] ^= arr[i2] ^= arr[i1] ^= arr[i2];
}

void BucketSort(int arr[], int size, int range) {
  int *count = (int *)calloc(range, sizeof(int));
  for (int i = 0; i < size; i++) {
    count[arr[i]]++;
  }
  int j = 0;
  for (int i = 0; i < range; i++) {
    for (; count[i] > 0; count[i]--) {
      arr[j++] = i;
    }
  }
  free(count);
}

int main(void) {
  int arr[] = {4, 5, 3, 2, 6, 7, 1, 8, 9, 10};
  BucketSort(arr, sizeof(arr) / sizeof(int), 10);
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
