#include <iostream>

void FindOddEvenNumbers(int FirstNumder, int LastNumbmber, int NumberType)
{

    FirstNumder += FirstNumder % 2 * NumberType;
    for (int i = FirstNumder; i < LastNumbmber; i = i + 2)
    {
        std::cout << i << "\n";
    }

}

int main()
{
    int FirstNumder = 0;
    int LastNumbmber = 0;
    int NumberType=0;

    std::cout << "Write range number from a to b:\n";
    std::cin >> FirstNumder;
    std::cin >> LastNumbmber;
    std::cout << "Enter 0 or 1 corresponding to odd or even:\n";
    std::cin >> NumberType;

    FindOddEvenNumbers(FirstNumder, LastNumbmber, NumberType);

    return 0;
}



