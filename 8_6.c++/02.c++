// print maximum sum of array
#include <bits/stdc++.h>
using namespace std;

int print_subArray(int arr[], int size)
{
    int sum = 0;
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        sum = 0;
        for (int j = i; j < size; j++)
        {
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
                if (sum > max)
                {
                    max = sum;
                }
            }
            // cout << endl;
        }
    }
    return max;
}
int main()
{

    int size = 4;
    int arr[size] = {-1, 4, 7, 2};

    int max = print_subArray(arr, size);

    cout << max;

    return 0;
}