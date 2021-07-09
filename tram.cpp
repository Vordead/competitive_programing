#include <iostream>
int main()
{
    int n;
    int a, b;
    int size = 0;
    int max;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        size -= a;
        size += b;
        if (i == 0)
        {
            max = size;
        }
        if (size > max)
        {
            max = size;
        }
    }
    std::cout << max;
}