#include "steps.h"
int step04(int x) {
  int acc = x;
  for (int k = 0; k < 4 * 3; k++) acc = acc * 31 + k;
  return acc ^ 4;
}
