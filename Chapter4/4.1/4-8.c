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

void QuickSelectUtil(int arr[], int lower, int upper, int k) {
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
  if (k < upper) {
    QuickSelectUtil(arr, start, upper - 1, k);
  } else if (k > upper) {
    QuickSelectUtil(arr, upper + 1, stop, k);
  }
}

int QuickSelect(int arr[], int size, int k) {
  QuickSelectUtil(arr, 0, size - 1, k);
  return arr[k - 1];
}

int main(void) {
  int arr[] = {4, 5, 3, 2, 6, 7, 1, 8, 9, 10};
  printf("%d\n", QuickSelect(arr, sizeof(arr) / sizeof(int), 5));
  return 0;
}
