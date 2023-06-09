#include <iostream>

void runGame() {
    int matches = 100;
    int currentPlayer = 1;

    while (matches > 0) {
        std::cout << "�� ����� �������� " << matches << " ������." << std::endl;
        std::cout << "��� ������ " << currentPlayer << std::endl;

        int numMatches;
        std::cout << "������� ���������� ������, ������� �� ������ ����� (�� 1 �� 9): ";
        std::cin >> numMatches;

        if (numMatches < 1 || numMatches > 9) {
            std::cout << "�������� ���������� ������! ���������� �����." << std::endl;
            continue;
        }

        matches -= numMatches;

        if (matches <= 0) {
            std::cout << "����� " << currentPlayer << " �������!" << std::endl;
            break;
        }

        if (currentPlayer != 1 && currentPlayer != 2) {
            std::cout << "������! �������� ����� ������." << std::endl;
            break;
        }

        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }
}

int main() {
    runGame();

    return 0;
}