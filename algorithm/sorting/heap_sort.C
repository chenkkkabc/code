#include "basic.h"

void build_heap(Array array, int n);
void heapify(Array array, int idx, int max);

void heap_sort(Array array, int n) {
  build_heap(array, n);
  int i;
  for (i = n - 1; i > 0; --i) {
    swap(array, 0, i);
    heapify(array, 0, i);
  }
}

void build_heap(Array array, int n) {
  int i;
  for (i = n / 2 - 1; i >= 0; --i) {
    heapify(array, i, n);
  }
}

// Max heap
void heapify(Array array, int idx, int max) {
  int left = 2 * idx + 1;
  int right = 2 * idx + 2;
  int largest;

  if (left < max && cmp(array[left], array[idx]) > 0) {
    largest = left;
  }
  else {
    largest = idx;
  }
  if (right < max && cmp(array[right], array[largest]) > 0) {
    largest = right;
  }
  if (largest != idx) {
    swap(array, idx, largest);
    heapify(array, largest, max);
  }
}
