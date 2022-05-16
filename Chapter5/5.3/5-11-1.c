#include <stdio.h>

int FindPair(int arr1[], int size1, int arr2[], int size2, int value) {
  for (int i = 0; i < size1; i++) {
    for (int j = 0; j < size2; j++) {
      if (arr1[i] + arr2[j] == value) {
        printf("%d, %d\n", arr1[i], arr2[j]);
        return 1;
      }
    }
  }
  return 0;
}

int main(void) {
  int arr1[] = {2, 3, -5, -7, 11, 13, -17, -19};
  int arr2[] = {1, 4, -6, -8, 9, 10, -12, -14};
  printf("%d\n", FindPair(arr1, sizeof(arr1) / sizeof(int), arr2, sizeof(arr2) / sizeof(int), 4));
  return 0;
}
