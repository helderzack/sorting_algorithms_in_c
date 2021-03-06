#include <stdio.h>
#include <stdlib.h>

int* bubbleSort(int array[], int last) {
  int swaps;

  do {
    swaps = 0;
    int i;
    for(i = 0; i < last - 1; i++) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swaps++;
      }
    }
    last--;
  } while(swaps > 0);

  return array;
}

void printArray(int* array, int n) {
  int i;
  printf("[ ");
  for(i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("]\n");
}

int main() {
  int array[] = {3, 7, 10, 6, 4, 8, 5, 7};
  int* pointerToArray = array;
  int n = sizeof(array)/sizeof(array[0]);
  printf("Unsorted array: ");
  printArray(pointerToArray, n);
  pointerToArray = bubbleSort(array, n);
  printf("Sorted array:   ");
  printArray(pointerToArray, n);
  return EXIT_SUCCESS;
}