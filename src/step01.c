#include "steps.h"
int step01(int x) {
  int acc = x;
  for (int k = 0; k < 1 * 3; k++) acc = acc * 31 + k;
  return acc ^ 1;
}
