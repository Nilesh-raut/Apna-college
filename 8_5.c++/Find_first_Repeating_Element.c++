// find smallest index of repeating element
#include <bits/stdc++.h>
using namespace std;
int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int SmallestIndexOfRepeating(int arr1[], int arr2[], int size)
{
    int minIndex = INT_MAX;
    int j;

    for (int i = 0; i < size; i++)
    {

        j = arr1[i];
        if (arr2[j] != -1)
        {

            if (minIndex > arr2[j])
            {
                minIndex = arr2[j];
                arr2[j] = i;
            }
        }
        else
        {

            arr2[j] = i;
        }

        // cout << minIndex << endl;
    }
    return minIndex;
}

int main()
{
    int size = 9;
    const int N = 1e6 + 2;
    int arr1[size] = {6, 10, 5, 4, 9, 800, 4, 6, 10};
    int arr2[N];
    for (int i = 0; i < N; i++)
    {
        arr2[i] = -1;
    }

    int a = SmallestIndexOfRepeating(arr1, arr2, size);
    if (a == INT_MAX)
    {
        cout << "-1";
        return 0;
    }
    cout << arr1[a];
    return 0;
}