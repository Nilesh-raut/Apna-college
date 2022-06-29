// This question is solved by my own way not any video reference
#include <bits/stdc++.h>
using namespace std;
int findSubArrayWithSum(int arr[], int size, int s)
{
    int sum = 0;
    int start = 0, end = 0;
    // int arr[size] = {1, 2, 3, 7, 5};

    while (start <= size - 1)
    {
        sum = sum + arr[end];
        if (sum == s)
        {
            // cout<<"Hi ";
            cout << start << " " << end;
            // cout<<"Bye";
            // cout<<endl;
            return 0;
        }
        if (sum > s)
        {
            start++;
            end = start;
            sum = 0;
            sum = sum + arr[end];
        }
        // cout<<sum<< " ";
        // cout<<start<<" ";
        // cout<<end<<endl;
        end++;
    }
}

int main()
{
    int size = 4;
    int s = 5;
    int arr[size] = {1, 2, 3, 8};
    findSubArrayWithSum(arr, size, s);

    return 0;
}