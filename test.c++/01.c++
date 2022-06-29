#include<bits/stdc++.h>
using namespace std;
int main(){

int size = 6;
int arr[size]={1,2,3,3,4,5};

int ans= arr[0];
int i = 1;

while (i<size)
{
   ans = ans ^arr[i];
   i++;
}

for (int i = 1; i < size; i++)
{
    ans = ans ^ i;
}
cout<<ans;



return 0;
}