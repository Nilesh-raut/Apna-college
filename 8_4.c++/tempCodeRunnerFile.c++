#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 8;
    int arr[n] = {1, 2, 0, 7, 2, 0, 2, 2};

    int maximum = -999;
    // int a, b;

    for (int i = 1; i < n; i++)
    {
        maximum = max(arr[i], maximum);

        if (maximum > arr[i + 1])
        {
            cout <<"#"<< arr[i] << "#";
        }
        cout << maximum<<"      ";

    }

    return 0;
}