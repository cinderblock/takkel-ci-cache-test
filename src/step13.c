#include "steps.h"
int step13(int x) {
  int acc = x;
  for (int k = 0; k < 13 * 3; k++) acc = acc * 31 + k;
  return acc ^ 13;
}
