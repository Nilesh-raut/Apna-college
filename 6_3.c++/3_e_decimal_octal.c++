#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the value of n ";
    cin>>n;

    int i = 0;
    int digit = 0, sum = 0;

    while (8 < n)
    {
        digit = n % 8;
        sum = (digit * pow(10, i)) + sum;
        i++;
        n = n / 8;
    }
        sum = (n * pow(10, i)) + sum;
        cout << sum << endl;

    return 0;
}