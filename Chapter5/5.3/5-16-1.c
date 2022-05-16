#include "auxi.h"
#include <math.h>
#include <stdio.h>

void ClosestPair(int arr[], int size, int value) {
  int closestFirst = 0, closestSecond = 1;
  int closestSum = fabs(value - (arr[closestFirst] + arr[closestSecond]));
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      int sum = fabs(value - (arr[i] + arr[j]));
      if (sum < closestSum) {
        closestSum = sum;
        closestFirst = i;
        closestSecond = j;
      }
    }
  }
  printf("%d, %d\n", arr[closestFirst], arr[closestSecond]);
}

int main(void) {
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19};
  ClosestPair(arr, sizeof(arr) / sizeof(int), 4);
  return 0;
}
