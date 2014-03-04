#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include "sort.h"

#define ARRAY_SIZE 300
#define LOOP_TIME 100
int my_array[ARRAY_SIZE];

void sort(Array array, int n, Sort st) {
  (*st)(array, n);
}

unsigned int fill_array() {
  int indx;
  unsigned int checksum = 0;
  for (indx = 0; indx < ARRAY_SIZE; ++indx) {
      checksum += my_array[indx] = rand();
  }
  return checksum;
}

void get_time(int* sec, int* usec) {
  struct timeval tv;

  gettimeofday(&tv, NULL);
  *sec = tv.tv_sec;
  *usec = tv.tv_usec;
}

char* get_sort_str(Sort st) {
  int i, size = sizeof(sort_array) / sizeof(struct SortStr);
  for (i = 0; i < size; ++i) {
    if (st == sort_array[i].sort) {
      return sort_array[i].str;
    }
  }
  return NULL;
}

void check(Sort st) {
  int indx, indx2;
  unsigned int checksum1, checksum2;
  int sec1, sec2, usec1, usec2;
  double secs;

  printf("%s", get_sort_str(st));
  get_time(&sec1, &usec1);
  for (indx2 = 0; indx2 < LOOP_TIME; ++indx2) {
    checksum1 = fill_array();
    sort(my_array, ARRAY_SIZE, st);
    for (indx = 1; indx < ARRAY_SIZE; ++indx) {
      if (my_array[indx - 1] > my_array[indx]) {
        printf("bad sort\n");
        return;
      }
    }
    checksum2 = 0;
    for (indx = 0; indx < ARRAY_SIZE; ++indx) {
      checksum2 += my_array[indx];
    }

    if (checksum1 != checksum2) {
      printf("bad checksum %d %d\n", checksum1, checksum2);
    }
  }
  get_time(&sec2, &usec2);
  secs = sec2 - sec1 + (double)(usec2 - usec1) / 1000000;
  printf("%gs\n", secs);
}

int main() {
  int i, size = sizeof(sort_array) / sizeof(struct SortStr);
  for (i = 0; i < size; ++i) {
    check(sort_array[i].sort);
  }

  return(0);
}
