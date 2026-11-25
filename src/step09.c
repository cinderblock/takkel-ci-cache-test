#include "steps.h"
int step09(int x) {
  int acc = x;
  for (int k = 0; k < 9 * 3; k++) acc = acc * 31 + k;
  return acc ^ 9;
}
