#include <graphic.h>

#include <stdio.h>

void clear() { printf("\033[2J\033[1;1H"); }

void Print(int x, int y, int mc) {
  printf("\t%8d\t\t\n", mc);
  printf("\t%3d\t%3d\n\n\t\t", x, y);
}