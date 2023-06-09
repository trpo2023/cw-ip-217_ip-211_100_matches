#pragma once
#ifndef MAIN_H
#define MAIN_H

// Заголовочные файлы
#include <iostream>
#include <locale>

// Объявление функций
void menu();
void matches();
void displayMatches(int count);
int getPlayerChoice(int turn, int count);
void switchPlayerTurn(int* turn);
void announceWinner(int turn);

// Определение функций
void menu() {
    std::cout << "Меню игры" << std::endl;
    // Ваш код для меню игры
}

void matches() {
    // Ваш код для игры с матчами
}

void displayMatches(int count) {
    std::cout << "На столе осталось " << count << " спичек." << std::endl;
}

int getPlayerChoice(int turn, int count) {
    int numMatches;
    // Ваш код для получения выбора игрока
    return numMatches;
}

void switchPlayerTurn(int* turn) {
    // Ваш код для переключения хода игрока
}

void announceWinner(int turn) {
    std::cout << "Игрок " << turn << " победил!" << std::endl;
}

#endif  // MAIN_H