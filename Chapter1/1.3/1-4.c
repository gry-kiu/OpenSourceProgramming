#include <stdio.h>

int fun(int n) {
  int i = 1, m = 0;
  while (i < n) { // * logn (1 <= n / 2^k -> 0 <= logn - k -> k <= logn)
    m += 1;
    i *= 2;
  }
  return m;
}

int main(void) {
  printf("%d\n", fun(10));
  return 0;
}
