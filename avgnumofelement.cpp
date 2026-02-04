#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter arry size :";
    cin>>n;
    int arr[1000],avg,sum=0;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        sum=sum+arr[j];
    }
    cout<<"Sum of the Element is:"<<sum<<endl;
    avg=sum/n;
    cout<<"Average Number of Element is :"<<avg;
    
    return  0;
}