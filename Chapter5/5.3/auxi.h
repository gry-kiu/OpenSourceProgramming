#ifndef AUXI_H
#define AUXI_H

int Less(int value1, int value2);
int More(int value1, int value2);
void PrintArray(int arr[], int size);
void Swap(int arr[], int i1, int i2);
void QuickSortUtil(int arr[], int lower, int upper);
void QuickSort(int arr[], int size);
void QuickSortUtil_Desc(int arr[], int lower, int upper);
void QuickSort_Desc(int arr[], int size);
int BinarySearch(int arr[], int size, int value);
int BinarySearch_Desc(int arr[], int size, int value);

#endif
