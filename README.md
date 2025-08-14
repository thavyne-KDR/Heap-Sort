# ✨ Heap Sort — Estrutura de Dados II

---

## 📦 Estrutura do Projeto

```
Heap-Sort-master/
├── src/        # Código-fonte principal (.c)
├── include/    # Arquivos de cabeçalho (.h)
├── bin/        # Executáveis gerados
├── README.md   # Documentação do projeto
```
---

## 🧠 O que é Heap Sort?

Heap Sort é um algoritmo eficiente de ordenação que utiliza uma estrutura chamada heap (árvore binária) para organizar os dados. Ele garante ordenação em tempo O(n log n) e é útil para grandes volumes de dados.

---

## 🚀 Como usar este projeto?

1. Abra o terminal na pasta do projeto.
2. Compile o código:
   ```sh
   gcc -Iinclude -o bin/programa src/HEAP.c src/HEAPmain.c src/heap_sort_main.c
   ```
3. Execute o programa:
   ```sh
   ./bin/programa
   ```

---

## 💡 Exemplo de uso

```
Digite o tamanho do vetor: 5
Digite os elementos do vetor desordenado:
10 3 7 1 8
Vetor original: 10 3 7 1 8
Vetor ordenado pelo Heap Sort: 1 3 7 8 10
```

- Digite a quantidade de números que quiser.
- Insira os valores separados por espaço ou enter.
- O programa mostra o vetor antes e depois da ordenação.

---

## 🔄 Como funciona o Heap Sort?

1. O vetor é transformado em um heap máximo (maior valor no topo).
2. O maior valor é colocado na última posição do vetor.
3. O heap é reajustado e o processo se repete até que todos os elementos estejam ordenados.

```
[ vetor desordenado ] → [ heap máximo ] → [ maior valor para o final ] → [ heap reajustado ] → ... → [ vetor ordenado ]
```

---

Projeto acadêmico para fins didáticos.
