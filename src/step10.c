#include "steps.h"
int step10(int x) {
  int acc = x;
  for (int k = 0; k < 10 * 3; k++) acc = acc * 31 + k;
  return acc ^ 10;
}
