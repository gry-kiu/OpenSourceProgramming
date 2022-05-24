#include <stdio.h>

int MaxProfit(int stocks[], int size) {
  int buy = 0, sell = 0;
  int minIndex = 0;
  int maxProfit = 0;
  for (int i = 0; i < size; i++) {
    if (stocks[i] < stocks[minIndex]) {
      minIndex = i;
    }
    int profit = stocks[i] - stocks[minIndex];
    if (profit > maxProfit) {
      buy = minIndex, sell = i;
      maxProfit = stocks[i] - stocks[minIndex];
    }
  }
  printf("Date of buying: %d, price: %d\n", buy, stocks[buy]);
  printf("Date of selling: %d, price: %d\n", sell, stocks[sell]);
  return maxProfit;
}

int main(void) {
  int stocks[] = {12000, 11000, 11500, 13500, 13000};
  printf("%d\n", MaxProfit(stocks, sizeof(stocks) / sizeof(int)));
  return 0;
}