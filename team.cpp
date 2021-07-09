#include <iostream>
using namespace std;

int main()
{
    int n; //number of problems in the contest
    int ans1;
    int ans2;
    int ans3;

    int count1 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        cin >> ans1 >> ans2 >> ans3;
        if (ans1 == 1)
        {
            count++;
        }
        if (ans2 == 1)
        {
            count++;
        }
        if (ans3 == 1)
        {
            count++;
        }
        if (count > 1)
        {
            count1++;
        }
    }
    cout << count1;
}