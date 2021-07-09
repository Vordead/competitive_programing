#include <iostream>
#include <unordered_map>

int main()
{
    std::string s;
    std::cin >> s;
    std::unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    if (m.size() % 2 == 0)
        std::cout << "CHAT WITH HER!";
    else
        std::cout << "IGNORE HIM!";
}