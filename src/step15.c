#include "steps.h"
int step15(int x) {
  int acc = x;
  for (int k = 0; k < 15 * 3; k++) acc = acc * 31 + k;
  return acc ^ 15;
}
