#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float sum = 0;
    do
    {
        cin >> n;
    } while (n <= 2 && n >= pow(10, 4));
    for (float i = 2; i <= n; i++)
        sum += 1 / i;
    cout << setprecision(4) << fixed << sum;
}