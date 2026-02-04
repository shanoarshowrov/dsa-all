#include<iostream>
using namespace std ;
int main ()
{
    int n,arr[1000],sum;
    cout<<"Input array size:";
    cin>>n;
    cout<<"Input element:";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int j=0;j<n;j++)
    {
        sum=0;
        sum=sum+arr[j];
    }
     cout<<"Sum of the array element is :"<<sum;

    return 0;
}
