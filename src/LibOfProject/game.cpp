#include <game.h>
#include <graphic.h>
#include <logic.h>
#include <message.h>

#include <stdio.h>

int Input();

int Input() {
  int ret;
  if (scanf("%d", &ret) != 1)
    return 0;
  if (ret < 1 || ret > 10)
    return 0;
  return ret;
}

void Game() {
  const int endnum = 100;
  int matchs_counter = 0, player1 = 0, player2 = 0, step_flag = 1;
  Print(player1, player2, matchs_counter);
  while (EndOfGame(matchs_counter, endnum)) {
    int temp = Input();
    if (temp == 0) {
      ErrorM();
      clear();
      Print(player1, player2, matchs_counter);
      continue;
    }
    if (ComplianceWithTheRules(temp, matchs_counter, endnum)) {
      TryagAin();
      clear();
      Print(player1, player2, matchs_counter);
      continue;
    }
    if (step_flag == 1)
      player1 = Addition(player1, temp);
    else
      player2 = Addition(player2, temp);
    step_flag *= -1;
    matchs_counter += temp;
    clear();
    Print(player1, player2, matchs_counter);
  }
  WinM(step_flag);
}