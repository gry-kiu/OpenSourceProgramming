#include <stdio.h>

int GCD(int m, int n) {
  if (m < n) {
    return GCD(n, m);
  }
  if (m % n == 0) {
    return n;
  }
  return GCD(n, m % n);
}

int main(void) {
  printf("%d\n", GCD(10, 7));
  return 0;
}
