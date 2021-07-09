#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int number;
    int onePosition;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> number;
            if (number == 1)
            {
                onePosition = i + 5 * j;
            }
        }
    }
    if (onePosition == 12)
    {
        cout << 0;
    }
    else if (onePosition == 7 || onePosition == 11 || onePosition == 17 || onePosition == 13)
    {
        cout << 1;
    }
    else if (onePosition == 2 || onePosition == 10 || onePosition == 14 || onePosition == 22 || onePosition == 6 || onePosition == 16 || onePosition == 8 || onePosition == 18)
    {
        cout << 2;
    }
    else if (onePosition == 1 || onePosition == 3 || onePosition == 21 || onePosition == 23 || onePosition == 5 || onePosition == 15 || onePosition == 9 || onePosition == 19)
    {
        cout << 3;
    }
    else if (onePosition == 0 || onePosition == 4 || onePosition == 20 || onePosition == 24)
    {
        cout << 4 << endl;
    }
}