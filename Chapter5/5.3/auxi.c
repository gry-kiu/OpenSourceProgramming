#include "auxi.h"
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

void QuickSortUtil_Desc(int arr[], int lower, int upper) {
  if (lower >= upper) {
    return;
  }
  int pivot = arr[lower];
  int start = lower, stop = upper;

  while (lower < upper) {
    while (arr[lower] >= pivot) {
      lower++;
    }
    while (arr[upper] < pivot) {
      upper--;
    }
    if (lower < upper) {
      Swap(arr, lower, upper);
    }
  }

  Swap(arr, start, upper);
  QuickSortUtil_Desc(arr, start, upper - 1);
  QuickSortUtil_Desc(arr, upper + 1, stop);
}

void QuickSort_Desc(int arr[], int size) {
  QuickSortUtil_Desc(arr, 0, size - 1);
}

int BinarySearch(int arr[], int size, int value) {
  int low = 0, high = size - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == value) {
      return 1;
    } else if (arr[mid] < value) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return 0;
}

int BinarySearch_Desc(int arr[], int size, int value) {
  int low = 0, high = size - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == value) {
      return 1;
    } else if (arr[mid] > value) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return 0;
}