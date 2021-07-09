#include <iostream>
#include <stdio.h>
int main()
{
    int k, n, w;
    int total = 0;
    std::cin >> k >> n >> w;
    for (int i = 1; i < w + 1; i++)
    {
        total += i * k;
    }
    if (total <= n)
        std::cout << 0;

    else
        std::cout << abs(n - total);
}