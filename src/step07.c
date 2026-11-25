#include "steps.h"
int step07(int x) {
  int acc = x;
  for (int k = 0; k < 7 * 3; k++) acc = acc * 31 + k;
  return acc ^ 7;
}
