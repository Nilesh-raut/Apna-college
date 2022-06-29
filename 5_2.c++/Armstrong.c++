//Vs code gives wrong ans in many times
#include<bits/stdc++.h>
using namespace std;
int main(){
 
int n;
cout<<"Enter the value of n "<<endl;
cin>>n;
int m =n;
int sum=0;
int digit;

while(n){
    digit = n%10;
    sum = sum + pow(digit,3);
    n =n/10; 
}
cout<<"It is armstrom num "<<endl;
if(sum==m){
    cout<<"Yes ";
}
else{
    cout<<"No ";
}
cout<<sum;
return 0;
}