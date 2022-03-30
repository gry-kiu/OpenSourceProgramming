#include <stdio.h>
#include <stdlib.h>

int Less(int value1, int value2) {
  return value1 < value2;
}

int More(int value1, int value2) {
  return value1 > value2;
}

int Min(int value1, int value2) {
  return Less(value1, value2) ? value1 : value2;
}

int Max(int value1, int value2) {
  return More(value1, value2) ? value1 : value2;
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

void UnionIntersectionSorted(int arr1[], int size1, int arr2[], int size2) {
  int *unionArr = (int *)malloc((size1 + size2) * sizeof(int));
  int *interArr = (int *)malloc(Min(size1, size2) * sizeof(int));
  int uIndex = 0, iIndex = 0;
  int first = 0, second = 0;
  while (first < size1 && second < size2) {
    if (arr1[first] == arr2[second]) {
      unionArr[uIndex++] = arr1[first];
      interArr[iIndex++] = arr1[first];
      first += 1;
      second += 1;
    } else if (arr1[first] < arr2[second]) {
      unionArr[uIndex++] = arr1[first++];
    } else {
      unionArr[uIndex++] = arr2[second++];
    }
  }
  while (first < size1) {
    unionArr[uIndex++] = arr1[first++];
  }
  while (second < size2) {
    unionArr[uIndex++] = arr2[second++];
  }

  PrintArray(unionArr, uIndex);
  PrintArray(interArr, iIndex);
  free(unionArr);
  free(interArr);
}

void UnionIntersectionUnsorted(int arr1[], int size1, int arr2[], int size2) {
  QuickSort(arr1, size1);
  QuickSort(arr2, size2);
  UnionIntersectionSorted(arr1, size1, arr2, size2);
}

int main(void) {
  int arr1[] = {1, 11, 2, 3, 14, 5, 6, 8, 9};
  int arr2[] = {2, 4, 5, 12, 7, 8, 13, 10};
  UnionIntersectionUnsorted(arr1, sizeof(arr1) / sizeof(int), arr2, sizeof(arr2) / sizeof(int));
  return 0;
}
