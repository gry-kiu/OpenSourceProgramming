#include <stdio.h>

int Max(int a, int b) {
  return a > b ? a : b;
}

int MaxPathSum(int arr1[], int size1, int arr2[], int size2) {
  int i = 0, j = 0;
  int result = 0, sum1 = 0, sum2 = 0;
  while (i < size1 && j < size2) {
    if (arr1[i] < arr2[j]) {
      sum1 += arr1[i];
      i += 1;
    } else if (arr1[i] > arr2[j]) {
      sum2 += arr2[j];
      j += 1;
    } else {
      result += Max(sum1, sum2);
      result += arr1[i];
      sum1 = 0;
      sum2 = 0;
      i += 1;
      j += 1;
    }
  }
  while (i < size1) {
    sum1 += arr1[i];
    i += 1;
  }
  while (j < size2) {
    sum2 += arr2[j];
    j += 1;
  }
  result += Max(sum1, sum2);
  return result;
}

int main(void) {
  int arr1[] = {12, 13, 18, 20, 22, 26, 70};
  int arr2[] = {11, 15, 18, 19, 20, 26, 30, 31};
  printf("%d\n", MaxPathSum(arr1, sizeof(arr1) / sizeof(int), arr2, sizeof(arr2) / sizeof(int)));
  return 0;
}
