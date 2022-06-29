#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 123;
    int digit;
    int sum = 0;

    while (n)
    {
        digit = n % 10;
        sum = (sum * 10) + digit;
        n = n / 10;
    }
    cout << sum;
    return 0;
}