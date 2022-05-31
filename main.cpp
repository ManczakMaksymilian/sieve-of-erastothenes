#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    bool arr[n];
    for (int i = 1; i * i <= n; i++)
    {
        arr[i] = true;
    }
    arr[0] = false;
    arr[1] = false;

    for (int i = 2; i <= n; i++)
        for (int j = i + i; j <= n; j += i)
            arr[j] = false;

    for (int i = 0; i <= n; i++)
        if (arr[i])
            cout << i << ", ";
}

int main()
{
    int n;
    cin >> n;
    sieve(n);

    return 0;
}