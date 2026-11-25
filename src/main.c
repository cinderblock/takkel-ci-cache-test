#include "greet.h"
#include "steps.h"
#include <stdio.h>

int main(void) {
  int v = 1;
  v = step01(v);
  v = step02(v);
  v = step03(v);
  v = step04(v);
  v = step05(v);
  v = step06(v);
  v = step07(v);
  v = step08(v);
  v = step09(v);
  v = step10(v);
  v = step11(v);
  v = step12(v);
  v = step13(v);
  v = step14(v);
  v = step15(v);
  v = step16(v);
  puts(greeting("takkel"));
  printf("%d", v);
  puts("");
  return 0;
}
