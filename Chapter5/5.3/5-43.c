#include <stdio.h>

int FindElementIn2DArray(int arr[][4], int r, int c, int value) {
  int row = 0, col = c - 1;
  while (row < r && col >= 0) {
    if (arr[row][col] == value) {
      return 1;
    } else if (arr[row][col] > value) {
      col--;
    } else {
      row++;
    }
  }
  return 0;
}

int main(void) {
  int arr[][4] = {{2, 3, 5, 7}, {11, 13, 17, 19}, {23, 29, 31, 37}};
  printf("%d\n", FindElementIn2DArray(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]) / sizeof(int), 19));
  return 0;
}