#include <stdio.h>

int fun(int n) {
  int m = 0;
  for (int i = 0; i < n; i++) { // * n
    for (int j = 0; j < n; j++) { // * n
      for (int k = 0; k < n; k++) { // * n
        m += 1;
      }
    }
  }
  return m;
}

int main(void) {
  printf("%d\n", fun(10));
  return 0;
}
