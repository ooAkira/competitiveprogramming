#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10000];
    for (int i = 1; i < 10000; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            break;
        }
    }

    for (int i = 1; i < 10000; i++)
    {
        if (arr[i] == 0)
        {
            cout << "NOT FOUND";
            break;
        }
        else if (arr[i] < 0)
        {
            cout << arr[i] << " ";
        }
    }
}