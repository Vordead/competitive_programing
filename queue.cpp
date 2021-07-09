#include <iostream>

int main()
{
    int n, t;
    std::string s;
    std::cin >> n >> t;
    std::cin >> s;
    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < s.length();)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i = i + 2;
            }
            else
            {
                s[i] = s[i];
                i++;
            }
        }
    }
    std::cout << s;
}