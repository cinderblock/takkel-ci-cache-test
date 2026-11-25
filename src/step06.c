#include "steps.h"
int step06(int x) {
  int acc = x;
  for (int k = 0; k < 6 * 3; k++) acc = acc * 31 + k;
  return acc ^ 6;
}
