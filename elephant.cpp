#include <iostream>
int main()
{
    int x;
    int count = 0;
    std::cin >> x;
    while (x > 5)
    {
        x -= 5;
        count++;
    }
    if (x > 0)
    {
        count++;
    }
    std::cout << count;
}