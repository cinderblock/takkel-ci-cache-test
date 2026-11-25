#include "steps.h"
int step05(int x) {
  int acc = x;
  for (int k = 0; k < 5 * 3; k++) acc = acc * 31 + k;
  return acc ^ 5;
}
