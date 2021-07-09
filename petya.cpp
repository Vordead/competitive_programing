#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int count = 0;
    bool isSmaller;
    string str1, str2;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.length(); i++)
    {
        if (tolower(str1[i]) == tolower(str2[i]))
        {
            count++;
        }
        else if (tolower(str1[i]) < tolower(str2[i]))
        {
            isSmaller = true;
            break;
        }
        else if (tolower(str1[i]) > tolower(str2[i]))
        {
            isSmaller = false;
            break;
        }
    }

    if (count == str1.length())
    {
        cout << 0;
    }
    else if (isSmaller)
        cout << -1;
    else if (!isSmaller)
        cout << 1;
}