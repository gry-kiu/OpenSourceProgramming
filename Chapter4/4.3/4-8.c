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

void QuickSortUtil(int arr[], int lower, int upper) {
  if (lower >= upper) {
    return;
  }
  int pivot = arr[lower];
  int start = lower, stop = upper;

  while (lower < upper) {
    while (arr[lower] <= pivot) {
      lower++;
    }
    while (arr[upper] > pivot) {
      upper--;
    }
    if (lower < upper) {
      Swap(arr, lower, upper);
    }
  }

  Swap(arr, start, upper);
  QuickSortUtil(arr, start, upper - 1);
  QuickSortUtil(arr, upper + 1, stop);
}

void QuickSort(int arr[], int size) {
  QuickSortUtil(arr, 0, size - 1);
}

void ArrayReduction(int arr[], int size) {
  QuickSort(arr, size);
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] <= 0) {
      continue;
    }
    for (int j = i + 1; j < size; j++) {
      arr[j] -= arr[i];
      if (arr[j] > 0) {
        printf("%d ", arr[j]);
      }
    }
    printf("\n");
  }
}

int main(void) {
  int arr[] = {5, 1, 1, 1, 2, 3, 5};
  ArrayReduction(arr, sizeof(arr) / sizeof(int));
  return 0;
}
