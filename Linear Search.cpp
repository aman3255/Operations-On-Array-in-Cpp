#include<iostream>
using namespace std;

int main(){
    int n,key;
    cout<<"Enter Size of Array:";
    cin>>n;
    
    int a[n];      
    cout<<"Enter Array Numbers:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    cout<<"Enter Key:";
    cin>>key;

    bool found=false;
    for (int i = 0; i < n; i++)
    {
        if(key==a[i]){
            cout<<"Key Found at index:"<<i<<endl;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"Key not found"<<endl;
    }
    return 0;
    
}