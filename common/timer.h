#include <stdio.h>
#include <sys/time.h>

#define CALL(x) { \
  timer::start_timer(); \
  (x); \
  timer::stop_timer(); \
  timer::print_timer(); \
}

namespace timer {

void get_time(int* sec, int* usec) {
  struct timeval tv;

  gettimeofday(&tv, NULL);
  *sec = tv.tv_sec;
  *usec = tv.tv_usec;
}

int sec1, sec2, usec1, usec2;
double secs;

void start_timer() {
  get_time(&sec1, &usec1);
}

void stop_timer() {
  get_time(&sec2, &usec2);
  secs = sec2 - sec1 + (double)(usec2 - usec1) / 1000000;
}

void print_timer() {
  printf("%gs\n", secs);
}

}
