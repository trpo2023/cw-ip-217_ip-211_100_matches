#pragma once
#ifndef MAIN_H
#define MAIN_H

// ������������ �����
#include <iostream>
#include <locale>

// ���������� �������
void menu();
void matches();
void displayMatches(int count);
int getPlayerChoice(int turn, int count);
void switchPlayerTurn(int* turn);
void announceWinner(int turn);

// ����������� �������
void menu() {
    std::cout << "���� ����" << std::endl;
    // ��� ��� ��� ���� ����
}

void matches() {
    // ��� ��� ��� ���� � �������
}

void displayMatches(int count) {
    std::cout << "�� ����� �������� " << count << " ������." << std::endl;
}

int getPlayerChoice(int turn, int count) {
    int numMatches;
    // ��� ��� ��� ��������� ������ ������
    return numMatches;
}

void switchPlayerTurn(int* turn) {
    // ��� ��� ��� ������������ ���� ������
}

void announceWinner(int turn) {
    std::cout << "����� " << turn << " �������!" << std::endl;
}

#endif  // MAIN_H