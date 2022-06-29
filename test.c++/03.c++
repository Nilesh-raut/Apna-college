// subarray with given sum
#include <bits/stdc++.h>
using namespace std;
int subarray_with_given_sum(int arr[], int size, int s)
{

    int i = 0;
    int sum = 0;
    int start = 0, end = 0;

    while (start<size && end<size)
    {
        sum = sum + arr[end];
        if (sum == s)
        {
            cout<<start<<" "<<end;
            return 0;
        }

        if (sum > s)
        {
            sum = 0;
            i = 0;
            start++;
            end=start;
        }
        end++;
    }
}

int main()
{

    int size = 5;
    int arr[size] = {1, 2, 3, 7, 5};
    int s = 12;

    subarray_with_given_sum(arr, size, s);

    return 0;
}