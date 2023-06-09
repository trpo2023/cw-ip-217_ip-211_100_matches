#include <iostream>
#include <locale>

int main() {
    setlocale(0, "");
    std::cout << "Программа игры в спички" << std::endl;
    runGame();

    return 0;
}