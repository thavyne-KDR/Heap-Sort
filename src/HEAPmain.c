#include <stdio.h>
#include "../include/HEAP.h"

int main()
{
  int n;
  printf("==============================\n");
  printf("     Algoritmo Heap Sort      \n");
  printf("==============================\n");
  printf("\nInforme o tamanho do vetor: ");
  scanf("%d", &n);

  int arr[n];
  printf("Digite os %d elementos do vetor:\n> ", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("\nVetor original:\n");
  printArray(arr, n);

  heapSort(arr, n);

  printf("Vetor ordenado pelo Heap Sort:\n");
  printArray(arr, n);

  printf("\nProcesso concluido com sucesso.\n");
  return 0;
}
