#include "steps.h"
int step02(int x) {
  int acc = x;
  for (int k = 0; k < 2 * 3; k++) acc = acc * 31 + k;
  return acc ^ 2;
}
