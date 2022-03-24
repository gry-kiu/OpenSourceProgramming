#include <stdio.h>

int fun(int n) {
  int i = n, m = 0;
  while (i > 0) { // * logn (1 <= n / 2^k -> 0 <= logn - k -> k <= logn)
    m += 1;
    i /= 2;
  }
  return m;
}

int main(void) {
  printf("%d\n", fun(10));
  return 0;
}
