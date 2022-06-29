// Longest arithmetic Subarray

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the element in array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }



    int count = 1;
    int dist = arr[0] - arr[1];
    int priCount = 0;
    int ans = 0;

    for (int i = 1; i < n; i++)
    {

        if (arr[i] - arr[i + 1] == dist)
        {
            count++;
        }
        else
        {
            // priCount = count;
            count = 1;
            dist = arr[i] - arr[i + 1];
        }

        ans = max(count, ans);
    }
    cout << endl;
    cout << ans + 1 << "        ";

    return 0;
}