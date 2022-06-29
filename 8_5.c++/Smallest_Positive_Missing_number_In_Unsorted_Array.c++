#include <bits/stdc++.h>
using namespace std;
int Smallest_Positive_Missing_number_In_Unsorted_Array(int arr[], int size, int a)
{
    int j = a;
    int i = 0;
    int indicator;
    while (i < size)
    {
        if (i == size - 1)
        {
            if (indicator == false)
            {
                return j;
            }
        }

        i++;

        if (arr[i - 1] == j)
        {
            j++;
            indicator = false;
            i = 0;
        }
    }
}

int smallestNumInArray(int arr[], int size)
{
    int i = 0, min = INT_MAX;
    while (i < size)
    {
        if (arr[i] >= 0)
        {

            if (arr[i] < min)
            {
                min = arr[i];
            }
        }

        i++;
        // cout << min << " ";
    }
    // cout << endl;
    return min;
}

int main()
{

    // int size = 9;
    // int arr[size] = {2, 9, -10, 5, 3, 1, 11, -1, 7};

    int size = 6;
    int arr[size] = {0, -9, 1, 3, -4, 5};

    cout << endl;
    int a = smallestNumInArray(arr, size);
    // int a= 1;

    // cout<<a;
    cout << Smallest_Positive_Missing_number_In_Unsorted_Array(arr, size, a);

    return 0;
}