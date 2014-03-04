#include "basic.h"

int cmp(Item i, Item j) {
  return (i - j);
}

void swap(Array array, int p, int q) {
  Item tmp = array[p];
  array[p] = array[q];
  array[q] = tmp;
}

void insert(Array array, int pos, Item value, int gap) {
  int i = pos - gap;
  while (i >= 0 && cmp(value, array[i]) < 0) {
    array[i + gap] = array[i];
    i = i - gap;
  }
  array[i + gap] = value;
}
