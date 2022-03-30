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

void Merge(int arr[], int tempArray[], int lowerIndex, int middleIndex, int upperIndex) {
  int lowerStart = lowerIndex, lowerStop = middleIndex;
  int upperStart = middleIndex + 1, upperStop = upperIndex;
  int count = lowerIndex;
  while (lowerStart <= lowerStop && upperStart <= upperStop) {
    if (arr[lowerStart] < arr[upperStart]) {
      tempArray[count++] = arr[lowerStart++];
    } else {
      tempArray[count++] = arr[upperStart++];
    }
  }
  while (lowerStart <= lowerStop) {
    tempArray[count++] = arr[lowerStart++];
  }
  while (upperStart <= upperStop) {
    tempArray[count++] = arr[upperStart++];
  }
  for (int i = lowerIndex; i <= upperIndex; i++) {
    arr[i] = tempArray[i];
  }
}

void MergeSortUtil(int arr[], int tempArray[], int lowerIndex, int upperIndex) {
  if (lowerIndex >= upperIndex) {
    return;
  }
  int middleIndex = (lowerIndex + upperIndex) / 2;
  MergeSortUtil(arr, tempArray, lowerIndex, middleIndex);
  MergeSortUtil(arr, tempArray, middleIndex + 1, upperIndex);
  Merge(arr, tempArray, lowerIndex, middleIndex, upperIndex);
}

void MergeSort(int arr[], int size) {
  int *tempArray = (int *)malloc(size * sizeof(int));
  MergeSortUtil(arr, tempArray, 0, size - 1);
  free(tempArray);
}

int main(void) {
  int arr[] = {4, 5, 3, 2, 6, 7, 1, 8, 9, 10};
  MergeSort(arr, sizeof(arr) / sizeof(int));
  PrintArray(arr, sizeof(arr) / sizeof(int));
  return 0;
}
