#include <stdio.h>

int APTriplets(int arr[], int size) {
  for (int i = 1; i < size - 1; i++) {
    int j = i - 1;
    int k = i + 1;
    while (j >= 0 && k < size - 1) {
      if (arr[j] + arr[k] == arr[i] * 2) {
        printf("%d, %d, %d\n", arr[j], arr[i], arr[k]);
        j -= 1;
        k += 1;
      } else if (arr[j] + arr[k] < arr[i] * 2) {
        k += 1;
      } else {
        j -= 1;
      }
    }
  }
}

int main(void) {
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19};
  APTriplets(arr, sizeof(arr) / sizeof(int));
  return 0;
}
