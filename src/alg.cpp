// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double k = 1;
  for (int i = 1; i <= n; i++) {
    k = k * value;
  }
  return k;
}

uint64_t fact(uint16_t n) {
  uint64_t  k = 1;
  while (n != 0) {
    k = k * n;
    n--;
  }
  return k;
}

double calcItem(double x, uint16_t n) {
  double k = pown(x, n) / fact(n);
  return k;
}

double expn(double x, uint16_t count) {
  double a = 0;
  uint64_t b = 0;
  while (b <= count) {
    a += pown(x, b) / fact(b);
    b += 1;
  }
  return a;
}

double sinn(double x, uint16_t count) {
  double a = 0;
  for (uint16_t b = 1; b <= count; b++) {
    a += pown(-1, b - 1) * (pown(x, (2 * b)-1) / fact((2 * b) - 1));
  }
  return a;
}

double cosn(double x, uint16_t count) {
  double a = 0;
  uint64_t b = 1;
  while (b <= count) {
    a += pown(-1, b - 1) * pown(x, (2 * b) - 2) / fact((2 * b) -2);
    b += 1;
  }
  return a;
}
