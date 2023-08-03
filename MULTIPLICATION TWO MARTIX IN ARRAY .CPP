#include<iostream>
using namespace std;

int main() {
    int r,c;
    cout<<"How Many Row:";
    cin>>r;
    cout<<"How Many Column:";
    cin>>c;
    int a[r][c];
    cout<<"Enter total "<<r*c<< " array elements for First Matrix"<<endl;
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<i+1<<"x"<<j+1<<" .Enter First array elements:";
            cin>>a[i][j];
        }
    }
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    int b[r][c];
    cout<<"Enter total "<<r*c<< " array elements for Second Matrix"<<endl;
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<i+1<<"x"<<j+1<<" .Enter Second array elements:";
            cin>>b[i][j];
        }
    }
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int x[r][c];
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            x[i][j]=a[i][j]*b[i][j];
        }
    }
    cout<<"Multiplication:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
