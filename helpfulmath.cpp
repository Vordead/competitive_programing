#include <iostream>
int main()
{
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    std::string number;
    std::cin >> number;
    for (int i = 0; i < number.length(); i++)
    {
        if (number[i] == '1')
        {
            counter1++;
        }
        else if (number[i] == '2')
        {
            counter2++;
        }
        else if (number[i] == '3')
        {
            counter3++;
        }
    }
    int totalCount = counter1 + counter2 + counter3;

    for (int i = 0; i < counter1; i++)
    {
        if (totalCount == 1)
        {
            std::cout << "1";
        }
        else
        {
            std::cout << "1+";
            totalCount--;
        }
    }
    for (int i = 0; i < counter2; i++)
    {
        if (totalCount == 1)
        {
            std::cout << "2";
        }
        else
        {
            std::cout << "2+";
            totalCount--;
        }
    }
    for (int i = 0; i < counter3; i++)
    {
        if (totalCount == 1)
        {
            std::cout << "3";
        }
        else
        {
            std::cout << "3+";
            totalCount--;
        }
    }
}