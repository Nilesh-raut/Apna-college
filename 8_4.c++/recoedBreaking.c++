#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 8;
    int arr[n] = {1, 2, 0, 7,2, 0, 2, 0};

    int maximum = -999;
    int primax = maximum;
    int count=0;

    for (int i = 1; i < n; i++)
    {
        maximum = max(arr[i], maximum);
        if (maximum != primax)
        {

            if (maximum > arr[i + 1])
            {
                count++;
                primax = maximum;
            }
        }

    }
    cout<<count;

    return 0;
}