#include<iostream>
using namespace std;
int main()
{
    
    int arr[]={4,2,7,12,67,23,4,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==99)
        {
            index=i;
        }
        
    }
    cout<<"Find element index is:"<<index<<endl;

    return 0;
}