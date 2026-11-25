#include "steps.h"
int step14(int x) {
  int acc = x;
  for (int k = 0; k < 14 * 3; k++) acc = acc * 31 + k;
  return acc ^ 14;
}
