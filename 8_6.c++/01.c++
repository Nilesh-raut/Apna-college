#include<bits/stdc++.h>
using namespace std;
 
void print_subArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <=j; k++)
            {
               cout<<arr[k]<<" ";
            }
            cout<<endl;
            
        }
        
    }
    
}

int main(){

int size =4;
int arr[size]={-1,4,7,2};

print_subArray(arr,size);
 
return 0;
}