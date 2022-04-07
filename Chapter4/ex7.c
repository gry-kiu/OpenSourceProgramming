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

int FindMin(int arr[], int size) {
  return size == 0 ? 0 : arr[0];
}

int FindMax(int arr[], int size) {
  return size == 0 ? 0 : arr[size - 1];
}

int FindMedian(int arr[], int size) {
  if (size == 0) {
    return 0;
  }
  int mid = size / 2;
  return size % 2 == 0 ? (arr[mid - 1] + arr[mid]) / 2 : arr[mid];
}

int main(void) {
  int arr[] = {2, 3, 11, 13, 5, 7};
  QuickSort(arr, sizeof(arr) / sizeof(int));
  printf("min: %d\n", FindMin(arr, sizeof(arr) / sizeof(int)));
  printf("max: %d\n", FindMax(arr, sizeof(arr) / sizeof(int)));
  printf("median: %d\n", FindMedian(arr, sizeof(arr) / sizeof(int)));
  return 0;
}
