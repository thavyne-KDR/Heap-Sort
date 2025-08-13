#include <stdio.h>

// Função para criar o heap
void heapify(int arr[], int n, int i)
{
  int maior = i; // Inicializa maior como raiz
  int esquerda = 2 * i + 1;
  int direita = 2 * i + 2;

  // Se filho da esquerda é maior que a raiz
  if (esquerda < n && arr[esquerda] > arr[maior])
    maior = esquerda;

  // Se filho da direita é maior que o maior até agora
  if (direita < n && arr[direita] > arr[maior])
    maior = direita;

  // Se maior não é raiz
  if (maior != i)
  {
    int temp = arr[i];
    arr[i] = arr[maior];
    arr[maior] = temp;

    // Recursivamente heapify a subárvore afetada
    heapify(arr, n, maior);
  }
}

// Função principal do Heap Sort
void heapSort(int arr[], int n)
{
  // Constrói o heap (reorganiza o vetor)
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);

  // Extrai elementos do heap um por um
  for (int i = n - 1; i > 0; i--)
  {
    // Move a raiz atual para o final
    int temp = arr[0];
    arr[0] = arr[i];
    arr[i] = temp;

    // Chama heapify na heap reduzida
    heapify(arr, i, 0);
  }
}

int main()
{
  int arr[100];
  int n = 0;
  int opcao;
  do
  {
    printf("\n==== MENU HEAP SORT ====");
    printf("\n1. Inserir vetor");
    printf("\n2. Ordenar vetor (Heap Sort)");
    printf("\n3. Mostrar vetor");
    printf("\n0. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("Digite o tamanho do vetor (max 100): ");
      scanf("%d", &n);
      if (n > 100 || n <= 0)
      {
        printf("Tamanho inválido!\n");
        n = 0;
        break;
      }
      printf("Digite os elementos do vetor:\n");
      for (int i = 0; i < n; i++)
      {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
      }
      break;
    case 2:
      if (n == 0)
      {
        printf("Primeiro insira o vetor!\n");
      }
      else
      {
        heapSort(arr, n);
        printf("Vetor ordenado com Heap Sort!\n");
      }
      break;
    case 3:
      if (n == 0)
      {
        printf("Vetor vazio!\n");
      }
      else
      {
        printf("Vetor atual:\n");
        for (int i = 0; i < n; i++)
          printf("%d ", arr[i]);
        printf("\n");
      }
      break;
    case 0:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida!\n");
    }
  } while (opcao != 0);
  return 0;
}