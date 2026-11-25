#include "steps.h"
int step12(int x) {
  int acc = x;
  for (int k = 0; k < 12 * 3; k++) acc = acc * 31 + k;
  return acc ^ 12;
}
