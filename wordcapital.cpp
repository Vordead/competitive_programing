#include <iostream>
#include <cctype>
int main()
{
    std::string word;
    std::cin >> word;
    if (islower(word[0]))
    {
        putchar(toupper(word[0]));
        for (int i = 1; i < word.length(); i++)
        {
            std::cout << word[i];
        }
    }
    else
        std::cout << word;
}