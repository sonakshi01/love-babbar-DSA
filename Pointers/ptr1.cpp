#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}

int main(){
    int arr[5]={2,5,6,4,8};
    print(arr,5);
    
}