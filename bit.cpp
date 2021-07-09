#include <iostream>
using namespace std;

int main()
{
    int n;
    int x = 0;
    string stmt;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> stmt;
        if (stmt == "++X" || stmt == "X++")
        {
            x++;
        }
        else if (stmt == "--X" || stmt == "X--")
        {
            x--;
        }
    }
    cout << x;
}