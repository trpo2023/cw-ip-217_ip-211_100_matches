#include <logic.h>

int EndOfGame(int x, int y) {
  int ret;
  if (x < y)
    ret = 1;
  else
    ret = 0;
  return ret;
}

int Addition(int x, int y) { return x + y; }

int ComplianceWithTheRules(int input, int mc, int mx) {
  int ret = 0;
  if (mx < mc + input)
    ret = 1;
  return ret;
}