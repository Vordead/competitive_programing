#include <iostream>
#include <stdio.h>
#include <ctype.h>

int main()
{
    int lows = 0;
    int ups = 0;
    std::string word;
    std::cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        if (islower(word[i]))

            lows++;

        else

            ups++;
    }

    for (int i = 0; i < word.length(); i++)
    {
        if (lows >= ups)

            putchar(tolower(word[i]));

        else

            putchar(toupper(word[i]));
    }
}