// octal to decimal
#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cout<<"Enter the value of n ";
cin>>n;

int digit;
int sum =0;
int i=0;


while (n)
{
    digit = n%10;
    sum = sum +(digit * pow(8,i));
    i++;
    n=n/10;
}
    cout<<sum<<endl;


 
return 0;
}