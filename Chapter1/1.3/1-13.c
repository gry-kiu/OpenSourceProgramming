#include <stdio.h>

int fun(int n) {
  int m = 0;
  // 1 + 2 + 4 + ... -> O(n)
  for (int i = 1; i <= n; i *= 2) { // * logn (1 <= n / 2^k -> 0 <= logn - k -> k <= logn)
    for (int j = 0; j <= i; j++) { // * i (O(n))
      m += 1;
    }
  }
  return m;
}

int main(void) {
  printf("%d\n", fun(10));
  return 0;
}
