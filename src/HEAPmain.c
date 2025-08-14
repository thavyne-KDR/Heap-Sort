#include <stdio.h>
#include "../include/HEAP.h"

int main()
{
  int n;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  int arr[n];
  printf("Digite os elementos do vetor desordenado:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Vetor original: ");
  printArray(arr, n);

  heapSort(arr, n);

  printf("Vetor ordenado pelo Heap Sort: ");
  printArray(arr, n);

  return 0;
}
