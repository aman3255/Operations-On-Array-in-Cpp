#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Size of Array:";
    cin>>n;
    int x=n,sum=0,average;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<i+1 <<" .Enter Array array elements:";
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        
        cout<<"Array :"<<a[i]<<" ";
    }
    average=sum/x;
    cout<<"Average is :"<<average;
    return 0;
}
