#include "steps.h"
int step08(int x) {
  int acc = x;
  for (int k = 0; k < 8 * 3; k++) acc = acc * 31 + k;
  return acc ^ 8;
}
