#include <stdio.h>

void TowerOfHonoi(int number, char src, char dst, char temp) {
  if (number < 1) {
    return;
  }
  TowerOfHonoi(number - 1, src, temp, dst);
  printf("Move disk %d from pole %c to pole %c.\n", number, src, dst);
  TowerOfHonoi(number - 1, temp, dst, src);
}

int main(void) {
  int number = 3;
  TowerOfHonoi(number, 'A', 'C', 'B');
  return 0;
}
