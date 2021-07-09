#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int m, n;
    cin >> m >> n;
    int ans = m * n;

    if (m == 1 && n == 1)
    {
        cout << 0;
    }
    else if (ans % 2 == 0)
    {
        cout << ans / 2;
    }
    else if (ans % 2 != 0)
    {
        ans--;
        cout << ans / 2;
    }
}