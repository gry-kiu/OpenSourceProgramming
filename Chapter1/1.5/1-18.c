#include <stdio.h>

int Fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(void) {
  printf("%d\n", Fibonacci(5));
  return 0;
}
