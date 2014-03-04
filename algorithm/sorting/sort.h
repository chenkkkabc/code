#include "basic.h"

extern void stooge_sort(Array array, int n);
extern void insertion_sort(Array array, int n);
extern void shell_sort(Array array, int n);
extern void bubble_sort(Array array, int n);
extern void brick_sort(Array array, int n);
extern void oddeven_sort(Array array, int n);
extern void gnome_sort(Array array, int n);
extern void merge_sort(Array array, int n);
extern void comb_sort(Array array, int n);
extern void quick_sort(Array array, int n);
extern void selection_sort(Array array, int n);
extern void heap_sort(Array array, int n);
extern void radix_sort(Array array, int n);
extern void builtin_quick_sort(Array array, int n);

typedef void (*Sort)(Array, int);

struct SortStr {
  Sort sort;
  char* str;
} sort_array[] = {
  { stooge_sort,        "stooge sort:    "},
  { insertion_sort,     "insertion sort: "},
  { shell_sort,         "shell sort:     "},
  { bubble_sort,        "bubble sort:    "},
  { brick_sort,         "brick sort:     "},
  { oddeven_sort,       "odd even sort:  "},
  { gnome_sort,         "gnome sort:     "},
  { merge_sort,         "merge sort:     "},
  { comb_sort,          "comb sort:      "},
  { quick_sort,         "quick sort:     "},
  { builtin_quick_sort, "builtin qsort:  "},
  { selection_sort,     "selection sort: "},
  { heap_sort,          "heap sort:      "},
};
