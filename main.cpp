#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis_white(1, 69);
    std::uniform_int_distribution<> dis_powerball(1, 26);

    std::cout << "\n  **WINNING POWERBALL NUMBERS**" << "\n" << "\n" << "   ";

    for (int i = 0; i < 5; i++)
    {
        std::cout << dis_white(gen) << "   ";
    }

    std::cout << dis_powerball(gen) << " \n" << "\n";

    return 0;
}
