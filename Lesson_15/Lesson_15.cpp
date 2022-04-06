#include <iostream>

int main()
{
    
    int FirstNumdet = 0;
    int LastNumbmber = 0;
    int NumberType=0;
    std::cout << "Write range number from a to b:\n";
    std::cin >> FirstNumdet;
    std::cin >> LastNumbmber;
    std::cout << "Enter 0 or 1 corresponding to odd or even:\n";
    std::cin >> NumberType;
    /*
    for (int i = 0; i < number; i++)
    {
        a = i-i*(i%2);
        std::cout << a;      
      
    }
    */
    FirstNumdet += FirstNumdet % 2 * NumberType;
    for (int i = FirstNumdet; i < LastNumbmber; i=i+2)
    {
        
        std::cout << i<< "\n";
        /*
        if (i % 2 == 0)
         {
           std::cout << i;
         }
        */

    }

}

void FindOddNumbers(int Limit, bool IsOdd)
{
    
}
