#include <iostream>
int main()
{
    int n, k;
    std::cin >> n >> k;
    while (k != 0)
    {
        if (n % 10 != 0)
        {
            n--;
            k--;
        }
        else
        {
            n /= 10;
            k--;
        }
    }
    std::cout << n;
}