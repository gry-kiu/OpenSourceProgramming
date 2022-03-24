#include <stdio.h>

void PrintInt(unsigned int number, int base) {
  char *conversion = "0123456789ABCDEF";
  char digit = number % base;
  if (number /= base) {
    PrintInt(number, base);
  }
  printf("%c", conversion[digit]);
}

int main(void) {
  PrintInt(16, 16);
  printf("\n");
  return 0;
}
