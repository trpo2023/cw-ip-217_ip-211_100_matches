#include <iostream>

void runGame() {
    int matches = 100;
    int currentPlayer = 1;

    while (matches > 0) {
        std::cout << "На столе осталось " << matches << " спичек." << std::endl;
        std::cout << "Ход игрока " << currentPlayer << std::endl;

        int numMatches;
        std::cout << "Введите количество спичек, которое вы хотите взять (от 1 до 9): ";
        std::cin >> numMatches;

        if (numMatches < 1 || numMatches > 9) {
            std::cout << "Неверное количество спичек! Попробуйте снова." << std::endl;
            continue;
        }

        matches -= numMatches;

        if (matches <= 0) {
            std::cout << "Игрок " << currentPlayer << " победил!" << std::endl;
            break;
        }

        if (currentPlayer != 1 && currentPlayer != 2) {
            std::cout << "Ошибка! Неверный номер игрока." << std::endl;
            break;
        }

        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }
}

int main() {
    runGame();

    return 0;
}