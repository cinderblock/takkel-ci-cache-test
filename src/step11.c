#include "steps.h"
int step11(int x) {
  int acc = x;
  for (int k = 0; k < 11 * 3; k++) acc = acc * 31 + k;
  return acc ^ 11;
}
