#include <iostream>
using namespace std;

int main()
{
    int n, k, a;
    int count = 0;
    cin >> n >> k;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[i] = a;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k - 1] && arr[i] != 0)
        {
            count++;
        }
    }

    cout << count;
}