#include <graphic.h>
#include <message.h>

#include <stdio.h>

void ErrorM() {
  clear();
  printf("Вы взяли более 10 или менее 1 спички\n"
         "попробуйте снова\nВведите 1 чтобы продолжить\n");
  char t;
  t = getchar();
  t = getchar();
  printf("%c", t);
}

void TryagAin() {
  clear();
  printf("В куче недостаточно спичек\nпопробуйте снова\nВведите 1 "
         "чтобы продолжить\n");
  char t;
  t = getchar();
  t = getchar();
  printf("%c", t);
}

void WinM(int x) {
  if (x == -1)
    printf("\n\tПобедил игрок %d\n", 1);
  else
    printf("\n\tПобедил игрок %d\n", 2);
}