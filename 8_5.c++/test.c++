#include <bits/stdc++.h>
using namespace std;
int first_repeating_element(int arr1[], int size, int arr2[], int n)
{
    int minIndex = INT_MAX;
    int index;
    for (int i = 0; i < size; i++)
    {

        cout << minIndex << " ";

        index = arr1[i];

        if (arr2[index] != -1)
        {

            if (minIndex > arr2[index])
            {
                minIndex = arr2[index];
            }
            arr2[index] = i;
        }
        else
        {
            arr2[index] = i;
        }

        // cout<<endl;
    }
    return minIndex;
}

int main()
{
    int size = 9;
    // int arr1[size] = {1, 8, 3, 4, 3, 9, 6};
    // 6, 10, 5, 4, 9, 120, 4, 6, 10
    int arr1[size]={6, 10, 5, 4, 9, 120, 4, 6, 10};
    const int n = 1e6 + 2;
    int i = 0;
    int arr2[n];

    while (i < n)
    {
        arr2[i] = -1;
        i++;
    }

    int a = first_repeating_element(arr1, size, arr2, n);
    cout << a;

    return 0;
}