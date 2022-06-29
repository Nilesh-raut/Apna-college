#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "Enter the num " << endl;
    cin >> n;
    int count = 0;
    int m = 2;
    while (m <= sqrt(n))
    {
        if (n % m == 0)
        {
            count++;
            break;
        }
        m++;
    }

    if (count>0)
    {
        cout<<"not prime "<<endl;
    }
    else
    {
        cout<<"num is prime "<<endl;
    }
    

    return 0;
}