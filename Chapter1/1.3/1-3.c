#include <stdio.h>

int fun(int n) {
  int m = 0;
  // 0 + 1 + 2 + ... + n-1 -> o(n^2)
  for (int i = 0; i < n; i++) { // * n
    for (int j = 0; j < i; j++) { // * i (O(n))
      m += 1;
    }
  }
  return m;
}

int main(void) {
  printf("%d\n", fun(10));
  return 0;
}
