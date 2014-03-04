// Josephus problem
// Circular list
#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int josephus_problem(int n, int m) {
  SinglyLinkedList t = malloc(sizeof *t), x = t;
  t->item = 1; t->next = t;
  int i;
  for (i = 2; i <= n; ++i) {
    x = (x->next = malloc(sizeof *x));
    x->item = i;
  }
  x->next = t;
  while (x != x->next) {
    for (i = 1; i < m; ++i) {
      x = x->next;
    }
    t = x->next;
    x->next = t->next;
    free(t);
  }
  Item leader = x->item;
  free(x);
  return leader;
}

// test stub
int main() {
  printf("n=100, m=3, leader=%d\n", josephus_problem(100, 3));
  printf("n=9, m=5, leader=%d\n", josephus_problem(9, 5));
  return 0;
}
