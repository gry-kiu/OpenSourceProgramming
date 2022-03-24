#include <stdio.h>

int fun(int n) {
  int j = 0, m = 0;
  for (int i = 0; i < n; i++) { // * n
    for (; j < n; j++) {
      m += 1;
    }
  }
  return m;
}

int main(void) {
  printf("%d\n", fun(10));
  return 0;
}
