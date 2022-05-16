#include "auxi.h"
#include <math.h>
#include <stdio.h>

void ClosestPair(int arr[], int size, int value) {
  QuickSort(arr, size);
  int first = 0, second = size - 1;
  int closestFirst = first, closestSecond = second;
  int closestSum = fabs(value - (arr[closestFirst] + arr[closestSecond]));
  while (first < second) {
    int sum = value - (arr[first] + arr[second]);
    if (fabs(sum) < closestSum) {
      closestSum = fabs(sum);
      closestFirst = first;
      closestSecond = second;
    }
    if (sum > 0) {
      first++;
    } else if (sum < 0) {
      second--;
    } else {
      break;
    }
  }
  printf("%d, %d\n", arr[closestFirst], arr[closestSecond]);
}

int main(void) {
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19};
  ClosestPair(arr, sizeof(arr) / sizeof(int), 4);
  return 0;
}
