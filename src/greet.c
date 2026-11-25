#include "greet.h"
#include <stdio.h>

const char *greeting(const char *who) {
  static char buf[128];
  snprintf(buf, sizeof buf, "hello, %s", who);
  return buf;
}
