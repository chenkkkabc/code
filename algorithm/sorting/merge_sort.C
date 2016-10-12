#include "basic.h"
#include <stdlib.h>

void m_sort(Array array, int l, int r);
void merge(Array array, int l, int m, int r);

void merge_sort(Array array, int n) {
  m_sort(array, 0, n-1);
}

void m_sort(Array array, int l, int r) {
  if (r <= l) {
    return;
  }
  int m = (r + l) / 2;
  m_sort(array, l, m);
  m_sort(array, m + 1, r);
  merge(array, l, m, r);
}

void merge(Array array, int l, int m, int r) {
  int i, j, k;
  int* aux1 = (int *) malloc((m - l + 1) * sizeof(int));
  int* aux2 = (int *) malloc((r - m) * sizeof(int));

  for (i = l; i <= m; ++i) {
    aux1[i - l] = array[i];
  }
  for (j = m + 1; j <= r; ++j) {
    aux2[j - m - 1] = array[j];
  }
  i = j = 0;
  k = l;
  while (i < m - l + 1 && j < r-m) {
    if (cmp(aux2[j], aux1[i]) >= 0) {
      array[k++] = aux1[i++];
    }
    else {
      array[k++] = aux2[j++];
    }
  }
  while (i < m - l + 1) {
    array[k++] = aux1[i++];
  }
  while (j < r - m) {
    array[k++] = aux2[j++];
  }
  free(aux1);
  free(aux2);
}
