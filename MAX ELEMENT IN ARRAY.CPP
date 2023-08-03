

#include <iostream>

using namespace std;

int main()
{
    int a[7]={4,8,6,9,5,2,7};
    int max,n=7;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max<<endl;
    return 0;
}
