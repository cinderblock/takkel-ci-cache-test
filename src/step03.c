#include "steps.h"
int step03(int x) {
  int acc = x;
  for (int k = 0; k < 3 * 3; k++) acc = acc * 31 + k;
  return acc ^ 3;
}
