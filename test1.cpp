#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            // cout << "i is now: " << i << " j is now: " << j << endl;
            cout << setw(2) << setfill('0') << i * 5 + j << " ";
        }
        cout << " i=" << i << endl;
    }
}