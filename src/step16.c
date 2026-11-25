#include "steps.h"
int step16(int x) {
  int acc = x;
  for (int k = 0; k < 16 * 3; k++) acc = acc * 31 + k;
  return acc ^ 16;
}
