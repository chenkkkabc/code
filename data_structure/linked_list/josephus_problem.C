// Josephus problem

#include <iostream>
#include "../../common/timer.h"

// Solution1: Circular list
#include "list.h"

int josephus1(int n, int m) {
  CircularLinkedList p = new Node, t = p;
  p->item = 1;
  for (int i = 2; i <= n; i++) {
    p = p->next = new Node;
    p->item = i;
  }
  p->next = t;
  while (p != p->next) {
    for (int i = 1; i < m; i++) p = p->next;
    t = p->next;
    p->next = t->next;
    delete t;
  }
  Item l = p->item;
  delete p;
  return l;
}

// Solution2: Recursion
int josephus2(int n, int m) {
  if (n == 1) return 1;
  else return (josephus2(n - 1, m) + m-1) % n + 1;
}

// test stub
int main() {
  int m, n;
  m = 30000, n = 29997;
  CALL(printf("[1] n=%d, m=%d, left=%d\n", m, n, josephus1(m, n)));
  CALL(printf("[2] n=%d, m=%d, left=%d\n", m, n, josephus2(m, n)));
  m = 9, n = 5;
  CALL(printf("[1] n=%d, m=%d, left=%d\n", m, n, josephus1(m, n)));
  CALL(printf("[2] n=%d, m=%d, left=%d\n", m, n, josephus2(m, n)));
  return 0;
}
