#ifdef ARRAY_IMPL
#include <stdlib.h>
#include "Stack.h"

static Item* s;
static int n;

void init(int max) {
  s = malloc(max * sizeof(Item));
  n = 0;
}

int empty() {
  return n == 0;
}

void push(Item item) {
  s[n++] = item;
}

Item pop() {
  return s[n--];
}

#endif
